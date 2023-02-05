#include <iostream>
#include "Pole.h"

bool Pole::isInsert(Ship& ship)
{
	if (ship.isGorisontal)
	{
		if (matrix[ship.y - 1][ship.x] != '')
		{

		}
	}
}

Pole::Pole()
{
	this->matrix = new char* [10];

	for (int i = 0; i < 10; i++)
	{
		this->matrix[i] = new char[10];
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			this->matrix[i][j] = '~';
		}
	}
}



 void Pole::insertShip(Ship& ship)
{
	
	if (ship.isGorisontal)
	{
		for (size_t i = ship.x ; i < ship.x + collection[numberShip]; i++)
		{
			matrix[ship.y][i] = '0';
		}
		numberShip++;
	}
	else
	{
		for (size_t i = ship.y; i < ship.y + collection[numberShip]; i++)
		{
			matrix[i][ship.x] = '0';
		}
		numberShip++;
	}
	
}

void Pole::showPole()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


