#pragma once
#include <string>
//�������
class ship
{
public:
	ship(int size);

	//������ ������ �������
	enum stats {
		alive = 1,
		damaged = 2,
		dead = 3
	};

	enum direction {
		up = 0,
		down = 1,
		left = 2,
		right = 3
	};
	
	//�����������
	int dir;

	void testAlive();

	//�����
    int  *boat;

	void printBoat();
	int size;

	 int *x;
	 int *y;

	~ship();
};

