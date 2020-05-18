#include "GameField.h"
#include "ship.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




ship::ship(int value)
{
	this->boat = new int[value];
	for (int i = 0; i < value; i++) {
		this->boat[i] = ship::alive;
	}

	this->size = value;


}

void ship::testAlive() {
	for (int i = 0; i < size; i++) {
		if (this->boat[i] == damaged) {
			cout <<  "Чего добился?";
		}
	}
}



void ship::printBoat(){
	for (int i = 0; i <  size; i++) {
		cout << this->boat[i];
	}
}


ship::~ship()
{
	delete[] this->boat;
}
