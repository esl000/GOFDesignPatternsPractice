#pragma once

class cRoom;

class cMaze
{
public:
	cMaze();

	void AddRoom(cRoom*);
	cRoom* RoomNo(int) const;
private:
	// 등록된 룸 클래스의 배열이나 해쉬 테이블
};

