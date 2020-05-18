/*Задача:
Каждый игрок имеет поле 10*10 с расставленными кораблями (стандартные правила Морского боя).
Реализовать классы «ИгровоеПоле», «Игра». Имитировать игру двух игроков.
*/

#include <iostream>
#include <locale.h>
#include <iomanip>
#include <ctime>
#include "ship.h"
#include "GameField.h"

int teslaTesta(GameField &player1, ship *p) {
	for(int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			if (player1.a[i][j] == 1) {
				player1.a[i][j] = 2;
			
				return 0;
			}
		}
}

using namespace std;

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	GameField player1;
	//player1.printField();

	//ship four(4);---
	/*int *P = new int[10];

	for (int i = 0; i < 10; i++) {
		P[i] = 1;
	}

	for (int i = 0; i < 10; i++) {
		cout << P[i];
	}*/

	//four.printBoat();

	//player1.setShips(four);----
	player1.printField();

	
	ship *p[10];
	//поставить все корабли
	for (int i = 0; i < 10; i++) {
		if (i < 4) {
			p[i] = new ship(1);
		}
		
		if (i > 3 && i < 7) {
			p[i] = new ship(2);
		}

		if (i > 6 && i < 9) {
			p[i] = new ship(3);
		}

		if (i == 9) {
			p[i] = new ship(4);
		}

		player1.setShips(*p[i]);
	};
	

//	teslaTesta(player1, *p);
	

	//player1.test(*p);

	player1.printField();

	system("pause");
}