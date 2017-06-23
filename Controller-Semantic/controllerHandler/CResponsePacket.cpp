/*
 * CResponsePacket.cpp
 *
 *  Created on: 2017年6月22日
 *      Author: Jugo
 */

#include "CResponsePacket.h"
#include "config.h"
#include "LogHandler.h"


CResponsePacket::CResponsePacket()
{
	jsonRoot.create();
}

CResponsePacket::~CResponsePacket()
{
	jsonRoot.release();
}

void CResponsePacket::format(int nType, JSONObject &jResp)
{
	switch(nType)
	{
	case TYPE_RESP_UNKNOW:
		break;
	case TYPE_RESP_MUSIC_SPOTIFY:
		jResp.put("type", TYPE_RESP_MUSIC_SPOTIFY);
		jResp.put("music", jsonRoot);
		break;
	case TYPE_RESP_STORY:
		break;
	case TYPE_RESP_TTS:
		break;
	case TYPE_RESP_MUSIC_LOCAL:
		break;
	}
}

CResponsePacket &CResponsePacket::setData(const char *szKey, const char *szValue)
{
	jsonRoot.put(szKey, szValue);
	return (*this);
}

CResponsePacket &CResponsePacket::setData(const char *szKey, std::string strValue)
{
	jsonRoot.put(szKey, strValue);
	return (*this);
}

CResponsePacket &CResponsePacket::setData(const char *szKey, int nValue)
{
	jsonRoot.put(szKey, nValue);
	return (*this);
}

CResponsePacket &CResponsePacket::setData(const char *szKey, double fValue)
{
	jsonRoot.put(szKey, fValue);
	return (*this);
}

void CResponsePacket::clear()
{
	jsonRoot.create();
}

