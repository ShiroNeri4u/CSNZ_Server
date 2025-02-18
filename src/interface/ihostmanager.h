#pragma once

#include "imanager.h"

class IUser;
class CGameMatch;

class IHostManager : public IBaseManager
{
public:
	virtual bool OnPacket(CReceivePacket* msg, IExtendedSocket* socket) = 0;
	virtual void OnHostChanged(IUser* gameMatchUser, IUser* newHost, CGameMatch* match) = 0;
};