#include <iostream>
#include "Bot.h"
#include "Game.h"
#include "Player.h"
#include "Pole.h"
#include "Ship.h"

using namespace std;

int main()
{
	Ship ship;
	Pole pole;
	pole.insertShip(ship);
	pole.showPole();
}
