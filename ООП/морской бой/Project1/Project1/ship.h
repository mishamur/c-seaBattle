#pragma once
#include <string>
// орабль
class ship
{
public:
	ship(int size);

	//статус клетки корабл€
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
	
	//направление
	int dir;

	void testAlive();

	//лодка
    int  *boat;

	void printBoat();
	int size;

	 int *x;
	 int *y;

	~ship();
};

