#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

void Car::displayInfo()
{
	int doors;
	string manufacturer;
	int year;

	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, manufacturer);
	setManufacurer(manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	setYear(year);
	cout << "Enter the number of doors: ";
	cin >> doors;
	setDoors(doors);

	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacurer() << endl;
	cout << "Year Built: " << getYear() << endl;
	cout << "Doors: " << getDoors() << endl << endl;
}