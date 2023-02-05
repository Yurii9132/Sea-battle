#pragma once
#include "Ship.h"
class Pole
{
private:
	char** matrix;
	Ship* ship;
	int collection[10]{ 4, 3, 3, 2, 2, 2, 1, 1, 1, 1 };
	int numberShip = 0;
	bool isInsert(Ship& ship);
public:
	Pole();
	void insertShip(Ship& ship);
	void showPole();
	
	void showPolePlayer();
	void showPoleBot();
};

