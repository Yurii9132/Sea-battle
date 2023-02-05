#pragma once
#include "Pole.h"

class Player
{
private:
	Pole& pole;
	
public:
	void fire(int x, int y);
};
