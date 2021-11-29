#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

void Vehicle::displayInfo()
{

	string manufacturer;
	int year;

	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	
	setManufacurer(manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	setYear(year);

	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacurer() << endl;
	cout << "Year Built: " << getYear() << endl << endl;
}