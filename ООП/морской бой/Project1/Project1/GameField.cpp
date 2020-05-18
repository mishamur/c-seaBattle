#include "GameField.h"
#include "ship.h"
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


GameField::GameField()
{

}

void GameField::printField() {
	for (int i = 0; i < 10; i++) {
		cout << endl;
		for (int j = 0; j < 10; j++) {
			cout << setw(4) << this->a[i][j];
		}
	}
	cout << endl;
}

//установить корбаль на доску
void GameField::setShips(ship &p) {
	srand(time(NULL));

	//координаты нашего корабля
	p.x = new int[p.size];
	p.y = new int[p.size];

	//направление
	int dir = 0;

	int x;
	int y;
	
	int countShip = 0;

	while (countShip < 1) {
		//позиция куда ставим кораблик
		x = rand() % 10;
		y = rand() % 10;


		do {
			x = rand() % 10;
			y = rand() % 10;
		} while (a[x][y] == 1);


		int temp_x = x;
		int temp_y = y;

		//выбираем направление
		dir = rand() % 4;

		//проверка возможности установки корабля
		bool flagOfSet = 1;

		for (int i = 0; i < p.size; i++) {
			if (x < 0 || y < 0 || x >= 10 || y >= 10) {
				flagOfSet = 0;
				break;
			}

			if( a[x  ][y  ]    ==  1 ||
				a[x  ][y + 1]  ==  1 ||
				a[x  ][y - 1]  ==  1 ||
				a[x + 1][y  ]  ==  1 ||
				a[x + 1][y + 1] == 1 ||
				a[x + 1][y - 1] == 1 ||
				a[x - 1][y  ]  ==  1 ||
				a[x - 1][y + 1] == 1 ||
				a[x - 1][y - 1] == 1){
				flagOfSet = 0;
				break;
			}


			switch (dir) {

			case 0://вправо
				x++;
				break;

			case 1://вниз
				y++;
				break;

			case 2://влево
				x--;
				break;

			case 3://вверх
				y--;
				break;
			}

		}




		if (flagOfSet == 1) {
			x = temp_x;
			y = temp_y;
			//Установка корабля
			for (int i = 0; i < p.size; i++) {
				this->a[x][y] = p.boat[i];
				switch (dir)
				{

				case 0://вправо
					x++;
					break;

				case 1://вниз
					y++;
					break;

				case 2://влево
					x--;
					break;

				case 3://вверх
					y--;
					break;

				}
			}
			countShip++;
		}
	}
	/*for (int i = 0; i < p.size; i++) {
		do {
			p.x[i] = rand() % 10;
			p.y[i] = rand() % 10;
		} while (a[p.x[i]][p.y[i]] == 1);

		this->a[p.x[i]][p.y[i]] = p.boat[i];
	}*/
}

void GameField::test(ship *p) {
	for (int i = 0; i < 10; i++) {

	}
}


GameField::~GameField()
{
}
