#pragma once

enum Direction {North, South, East, West};

class cMapSite
{
public:
	virtual void Enter() = 0;
};

