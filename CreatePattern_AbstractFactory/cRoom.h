#pragma once
#include "cMapSite.h"
class cRoom :
	public cMapSite
{
public:
	cRoom(int roomNo);
	
	cMapSite* GetSide(Direction) const;
	void SetSide(Direction, cMapSite*);

	virtual void Enter();

private:
	cMapSite* _sides[4]; // 방향에 따른 배열
	int _roomNumber;
};

