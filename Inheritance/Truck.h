#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"
#include <iostream>
using namespace std;

class Truck : public Vehicle
{
private:
	int capacity;
public:
	Truck()
	{
		capacity = 0;
	}
	int getCapacity()
	{ return capacity; }
	void setCapacity(int itemCapacity)
	{ capacity = itemCapacity; }
	void displayInfo();
};

#endif