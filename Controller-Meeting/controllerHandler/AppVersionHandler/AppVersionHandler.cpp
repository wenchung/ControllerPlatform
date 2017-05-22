#include "AppVersionHandler.h"

#include <errno.h>
#include <fstream>
#include <string>
#include <string.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include "../HiddenUtility.hpp"
#include "LogHandler.h"

#define INOTIFY_EVENT_SIZE  (sizeof (struct inotify_event))
#define INOTIFY_BUF_LEN     (1024 * (INOTIFY_EVENT_SIZE + 16))

void *threadStartRoutine_AppVersionHandler_runWatcher(void *argv)
{
	auto uadlh = reinterpret_cast<AppVersionHandler*>(argv); 
	_log("[AppVersionHandler] %s threadStartRoutine_AppVersionHandler_runWatcher() step in", uadlh->strTaskName.c_str());

	uadlh->watcherThreadId = pthread_self();
	uadlh->doLoop = true;
	uadlh->runWatcher();			
	
	_log("[AppVersionHandler] %s threadStartRoutine_AppVersionHandler_runWatcher() step out", uadlh->strTaskName.c_str());
	return 0;
}

AppVersionHandler::AppVersionHandler(std::string watchDirectory, int inotifyMask) : 
	watchDir(watchDirectory), lastUpdated(-1), inotifyEventMask(inotifyMask), doLoop(false)
{
}

AppVersionHandler::~AppVersionHandler()
{
	stop();
}

void AppVersionHandler::start()
{
	strTaskName = taskName();

	createThread(threadStartRoutine_AppVersionHandler_runWatcher, 
		this, "AppVersionHandler Watcher Thread");
}

void AppVersionHandler::stop()
{
	if (0 == watcherThreadId)
	{
		_log("[AppVersionHandler] %s stop() 0 == watcherThreadId", strTaskName.c_str());
		return;
	}

	doLoop = false;

	//pthread_detach(watcherThreadId);
	threadJoin(watcherThreadId);
	watcherThreadId = 0;
}

void AppVersionHandler::runWatcher()
{
	strTaskName = taskName();

	_log("[AppVersionHandler] %s runWatcher() Initializing members once before going into watch loop", strTaskName.c_str());
	reload();

	while(doLoop)
	{
		int inotifyFd, inotifyWd;
		do
		{
			int ret = HiddenUtility::initInotifyWithOneWatchDirectory(
				&inotifyFd, &inotifyWd, watchDir.c_str(), inotifyEventMask);
			if (ret == 0)
			{
				_log("[AppVersionHandler] %s runWatcher() watch created, break creating loop", strTaskName.c_str());
				break;
			}	
			
			lastUpdated = -1;
			sleep(10);
		} while(doLoop);
		
		int maxFd = inotifyFd + 1;
		_log("[AppVersionHandler] %s runWatcher() watching changes in %s", strTaskName.c_str(), watchDir.c_str());
		
		while(doLoop)
		{
			fd_set readFdSet;
			FD_ZERO(&readFdSet);
			FD_SET(inotifyFd, &readFdSet);
			
			// On Linux, select() modifies timeout to reflect the amount of time not slept
			struct timeval timeout;
			timeout.tv_sec = 1;
			timeout.tv_usec = 0;

			//_log("[AppVersionHandler] %s select() step in");
			int ret = select(maxFd, &readFdSet, NULL, NULL, &timeout);
			//_log("[AppVersionHandler] %s select() stepped out, ret = %d", ret);

			if (ret == 0)
			{
				// timeout
				if (!doLoop)
				{
					_log("[AppVersionHandler] %s runWatcher() doLoop = false, break loop", strTaskName.c_str());
					break;
				}
				else
				{
					continue;
				}
			}
			else if (ret < 0)
			{
				if (errno != EINTR)
				{
					_log("[AppVersionHandler] %s runWatcher() select() returned with EINTR, try again", strTaskName.c_str());
					continue;
				}

				_log("[AppVersionHandler] %s runWatcher() select() failed: %s", strTaskName.c_str(), strerror(errno));
				break;
			}
			
			uint8_t buf[INOTIFY_BUF_LEN];
			size_t len = read(inotifyFd, buf, INOTIFY_BUF_LEN);
			
			if (len < 1)
			{
				_log("[AppVersionHandler] %s runWatcher() read() failed: %s", strTaskName.c_str(), strerror(errno));
				break;
			}

			_log("[AppVersionHandler] %s runWatcher() detected dir change, len = %d", strTaskName.c_str(), len);
			
			int i = 0;
			while (i < len) 
			{
				// TODO MOVED_FROM and MOVE_TO and IGNORE handling
				// when dir is moved from original tree
				struct inotify_event *event = (struct inotify_event *) &buf[i];
				if (event->len && (event->mask & inotifyEventMask)) 
				{
					if (!onInotifyEvent(event))
					{
						break;
					}
				}

				i += INOTIFY_EVENT_SIZE + event->len;
			}
		}

		inotify_rm_watch(inotifyFd, inotifyWd);
		close(inotifyFd);
		
		if (doLoop)
		{
			_log("[AppVersionHandler] %s runWatcher() sleep before next watch loop", strTaskName.c_str());
			sleep(10);
		}
	}

	_log("[AppVersionHandler] %s runWatcher() exit", strTaskName.c_str());
}

void AppVersionHandler::onReceiveMessage(int lFilter, int nCommand, unsigned long int nId, int nDataLen,
	const void* pData)
{
	_log("[AppVersionHandler] %s Ignore everything passed to onReceiveMessage()", strTaskName.c_str());
}

std::string AppVersionHandler::taskName()
{
	return "AppVersionHandler";
}
