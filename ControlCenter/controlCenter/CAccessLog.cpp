/*
 * CAccessLog.cpp
 *
 *  Created on: 2015年12月7日
 *      Author: Louis Ju
 */

#include "CAccessLog.h"
#include "packet.h"
#include <map>
#include <string>
#include "utility.h"
#include "CMongoDBHandler.h"
#include "CSocketClient.h"
#include "CCmpHandler.h"

using namespace std;

static CAccessLog* accessLog = 0;

CAccessLog::CAccessLog() :
		mongodb(CMongoDBHandler::getInstance()), mongoClient(new CSocketClient), cmpParser(CCmpHandler::getInstance())
{

}

CAccessLog::~CAccessLog()
{
	mongoClient->socketClose();
	delete mongoClient;
}

CAccessLog* CAccessLog::getInstance()
{
	if (0 == accessLog)
	{
		accessLog = new CAccessLog();
	}
	return accessLog;
}

int CAccessLog::connectDB(string strIP, int nPort)
{
	return mongoClient->start( AF_INET, strIP.c_str(), nPort);
}

string CAccessLog::insertLog(const int nType, string strData)
{

	string strOID;
	switch (nType)
	{
		case TYPE_MOBILE_SERVICE:
			strOID = mongodb->insert("access", "mobile", strData);
			break;
		case TYPE_POWER_CHARGE_SERVICE:
			strOID = mongodb->insert("access", "power", strData);
			break;
		case TYPE_SDK_SERVICE:
			strOID = mongodb->insert("access", "sdk", strData);
			break;
		case TYPE_TRACKER_SERVICE:
			strOID = mongodb->insert("access", "tracker", strData);
			break;
		case TYPE_TRACKER_APPLIENCE:
			strOID = mongodb->insert("access", "applience", strData);
			break;
		case TYPE_TRACKER_TOY:
			strOID = mongodb->insert("access", "toy", strData);
			break;
		case TYPE_TRACKER_IOT:
			strOID = mongodb->insert("access", "iot", strData);
			break;
		default:
			//strOID = mongodb->insert("access", "unknow", strData);
			log("Insert Access log fail, unknow service type", "[AccessLog]");
			break;
	}
	return strOID;

}

int CAccessLog::cmpAccessLogRequest(string strType, string strLog)
{
	int nRet = -1;
	int nBody_len = 0;
	int nTotal_len = 0;

	CMP_PACKET packet;
	void *pHeader = &packet.cmpHeader;
	char *pIndex = packet.cmpBody.cmpdata;

	memset(&packet, 0, sizeof(CMP_PACKET));

	cmpParser->formatHeader( access_log_request, STATUS_ROK, getSequence(), &pHeader);

	int nType = -1;
	convertFromString(nType, strType);

	int net_type = htonl(nType);
	memcpy(pIndex, (const char*) &net_type, 4);
	pIndex += 4;
	nBody_len += 4;

	memcpy(pIndex, strLog.c_str(), strLog.length());
	pIndex += strLog.length();
	nBody_len += strLog.length();

	memcpy(pIndex, "\0", 1);
	++pIndex;
	++nBody_len;

	nTotal_len = sizeof(CMP_HEADER) + nBody_len;
	packet.cmpHeader.command_length = htonl(nTotal_len);

	nRet = mongoClient->socketSend(mongoClient->getSocketfd(), &packet, nTotal_len);
	if (nRet != nTotal_len)
	{
		_DBG("[Center] send access log fail, socket FD: %d", mongoClient->getSocketfd());
	}

	return nRet;
}
