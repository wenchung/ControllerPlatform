/*
 * CController.h
 *
 *  Created on: 2016年06月27日
 *      Author: Jugo
 */

#pragma once

#include "CObject.h"

class CTransferUser;
class CTransferTracker;

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
	CTransferTracker *transTracker;
	CTransferUser *transUser;
	volatile int mnBusy;

};
