#pragma once
#include "ship.h"
// ������� �����
class GameField 
{
public:
	GameField();
	int a[10][10] = {0};
    void printField();
	void setShips(ship & boat);

	void test(ship *p);
	//��������� �������
	~GameField();
};

