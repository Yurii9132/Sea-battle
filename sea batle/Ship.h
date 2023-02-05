#pragma once\

class Ship
{
private:	
public:
	int x = 4;
	int y = 4;
	bool isGorisontal = true;
	int* ship;
	static int P;
	static int B;

	Ship();
	char& returnShip();
	void setX();
	void setY();
};
