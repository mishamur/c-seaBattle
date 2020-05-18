#pragma once
#include "ship.h"
// Игровая доска
class GameField 
{
public:
	GameField();
	int a[10][10] = {0};
    void printField();
	void setShips(ship & boat);

	void test(ship *p);
	//установка корабля
	~GameField();
};

