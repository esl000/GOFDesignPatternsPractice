#pragma once

class cRoom;

class cMaze
{
public:
	cMaze();

	void AddRoom(cRoom*);
	cRoom* RoomNo(int) const;
private:
	// ��ϵ� �� Ŭ������ �迭�̳� �ؽ� ���̺�
};

