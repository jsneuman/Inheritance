// Jacob Neuman
// 11/58/2021
// CIS 1202 501

#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

int main()
{
	Vehicle vehicle;
	Car car;
	Truck truck;

	cout << "Vehicle Program" << endl << endl;
	vehicle.displayInfo();
	car.displayInfo();
	truck.displayInfo();

	return 0;
}