#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

void displayInfo()
{
	Vehicle vehicle;
	string manufacturer;
	int year;

	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	vehicle.setManufacurer(manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	vehicle.setYear(year);

	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << vehicle.getManufacurer() << endl;
	cout << "Year Built: " << vehicle.getYear() << endl;
}