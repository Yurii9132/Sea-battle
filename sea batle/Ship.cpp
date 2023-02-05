#include "Ship.h"

int Ship::P = 0;
int Ship::B = 0;

Ship::Ship()
{
	this->ship = new int[10]{ 4, 3, 3, 2, 2 , 2, 1, 1, 1, 1 };
}


