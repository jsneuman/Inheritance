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
	{
		return manufacturer;
	}
	void setManufacurer(string itemManufactuer)
	{
		itemManufactuer = manufacturer;
	}
	int getYear()
	{
		return year;
	}
	void setYear(int itemYear)
	{
		itemYear = year;
	}
};
#endif