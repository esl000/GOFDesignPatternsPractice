#pragma once
#include "cMapSite.h"

class cRoom;

class cDoor :
	public cMapSite
{
public:
	cDoor(cRoom* = 0, cRoom* = 0);

	virtual void Enter();
	cRoom* OtherSideFrom(cRoom*);

private:
	cRoom* _room1, *_room2;
	bool _isOpen;
};

