#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int doors;
public:
	Car()
	{
		doors = 0;
	}
	int getDoors()
	{ return doors; }
	void setDoors(int itemDoors)
	{ doors = itemDoors; }
	void displayInfo();
};

#endif