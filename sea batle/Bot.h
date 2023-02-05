#pragma once
#include "Pole.h"

class Bot
{
private:
	Pole& pole;
public:
	void fire(int x, int y);
};
