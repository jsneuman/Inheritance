#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	Vehicle()
	{
		manufacturer = " ";
		year = 0;
	}
	string getManufacurer()
	{ return manufacturer; }
	void setManufacurer(string itemManufactuer)
	{ manufacturer = itemManufactuer; }
	int getYear()
	{ return year; }
	void setYear(int itemYear)
	{ year = itemYear; }
	void displayInfo();
};
#endif