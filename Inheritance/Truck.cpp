#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

void Truck::displayInfo()
{
	int capacity;
	string manufacturer;
	int year;

	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	setManufacurer(manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	setYear(year);
	cout << "Enter the towing capacity: ";
	cin >> capacity;
	setCapacity(capacity);

	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacurer() << endl;
	cout << "Year Built: " << getYear() << endl;
	cout << "Towing capacity: " << getCapacity() << endl;
}