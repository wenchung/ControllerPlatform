/*
 * CController.h
 *
 *  Created on: 2016年06月27日
 *      Author: Jugo
 */

#pragma once

#include <string>
#include <vector>
#include <list>
#include <map>
#include "CObject.h"
#include "common.h"
#include "packet.h"

using namespace std;

class CMongoDBHandler;
class CTransferUser;

class CController: public CObject
{
public:
	virtual ~CController();
	static CController* getInstance();
	int start();
	int stop();
	void OnTimer(int nId);

protected:
	void onReceiveMessage(int nEvent, int nCommand, unsigned long int nId, int nDataLen, const void* pData);

private:
	explicit CController();

private:
	CMongoDBHandler *mongo;
	CTransferUser *transUser;
	volatile int mnBusy;

};
