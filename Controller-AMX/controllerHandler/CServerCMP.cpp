/*
 * CServerDevice.cpp
 *
 *  Created on: 2016年8月9日
 *      Author: Jugo
 */

#include <string>
#include "CServerCMP.h"
#include "AMXCommand.h"
#include "common.h"
#include "packet.h"
#include "JSONObject.h"

using namespace std;

CServerCMP::CServerCMP(CObject *object)
{
	mpController = object;
}

CServerCMP::~CServerCMP()
{

}

int CServerCMP::onBind(int nSocket, int nCommand, int nSequence, const void *szBody)
{
	response(nSocket, nCommand, STATUS_ROK, nSequence, 0);
	mapClient[nSocket] = nSocket;
	_log("[CServerCMP] Socket Client FD:%d Binded", nSocket);
	return TRUE;
}

int CServerCMP::onUnbind(int nSocket, int nCommand, int nSequence, const void *szBody)
{
	response(nSocket, nCommand, STATUS_ROK, nSequence, 0);
	if(mapClient.end() != mapClient.find(nSocket))
	{
		mapClient.erase(nSocket);
		_log("[CServerCMP] Socket Client FD:%d Unbinded", nSocket);
	}
	return TRUE;
}

int CServerCMP::onAmxControl(int nSocket, int nCommand, int nSequence, const void *szBody)
{
	string strBody;
	string strCommand;
	int nStatus;
	AMX_COMMAND amxCommand;

	strBody = reinterpret_cast<const char*>(szBody);

	nStatus = STATUS_RINVJSON;

	if(!strBody.empty())
	{
		JSONObject *jobj = new JSONObject(strBody);
		if(jobj->isValid())
		{
			amxCommand.nFunction = jobj->getInt("function");
			amxCommand.nDevice = jobj->getInt("device");
			amxCommand.nControl = jobj->getInt("control");
			strCommand = getAMXControlRequest(amxCommand.nFunction, amxCommand.nDevice, amxCommand.nControl);
			if(!strCommand.empty())
			{
				_log("[CServerCMP] onAmxControl Command: %s", strCommand.c_str());
				nStatus = STATUS_ROK;
				Message message;
				message.what = amx_control_request;
				message.strData = strCommand;
				mpController->sendMessage(message);
			}
		}
		jobj->release();
		delete jobj;
	}

	return response(nSocket, nCommand, nStatus, nSequence, 0);
}

int CServerCMP::onAmxStatus(int nSocket, int nCommand, int nSequence, const void *szBody)
{
	string strBody;
	string strCommand;
	int nStatus;
	AMX_COMMAND amxCommand;

	strBody = reinterpret_cast<const char*>(szBody);

	nStatus = STATUS_RINVJSON;

	if(!strBody.empty())
	{
		JSONObject *jobj = new JSONObject(strBody);
		if(jobj->isValid())
		{
			amxCommand.nFunction = jobj->getInt("function");
			amxCommand.nDevice = jobj->getInt("device");
			amxCommand.nStatus = jobj->getInt("request-status");
			strCommand = getAMXStatusRequest(amxCommand.nFunction, amxCommand.nDevice, amxCommand.nStatus);
			if(!strCommand.empty())
			{
				_log("[CServerCMP] onAmxStatus Command: %s", strCommand.c_str());
				nStatus = STATUS_ROK;
				Message message;
				message.what = amx_status_request;
				message.strData = strCommand;
				mpController->sendMessage(message);
			}
		}
		jobj->release();
		delete jobj;
	}

	return response(nSocket, nCommand, nStatus, nSequence, 0);
}

void CServerCMP::broadcastAMXStatus(const char *szStatus)
{
	int nId = getAMXStatusResponse(szStatus);
	if(10000 > nId)
	{
		_log("[CServerCMP] broadcastAMXStatus Invalid status: %s , code:%d", szStatus, nId);
		return;
	}

	JSONObject jobjStatus;
	jobjStatus.put("function", nId / 10000);
	jobjStatus.put("device", (nId % 10000) / 100);
	jobjStatus.put("status", (nId % 10000) % 100);

	string strJSON = jobjStatus.toString();
	jobjStatus.release();

	int nRet = 0;
	map<int, int>::iterator it;
	for(it = mapClient.begin(); it != mapClient.end(); ++it)
	{
		_log("[CServerCMP] broadcastAMXStatus AMX Status: %s to Socket:%d", strJSON.c_str(), it->first);
		request(it->first, amx_broadcast_status_request, STATUS_ROK, getSequence(), strJSON.c_str());
		if(0 >= nRet)
			break;
	}
}