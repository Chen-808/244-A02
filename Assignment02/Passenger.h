#pragma once
#include <string>
#include "date.h"
#include <array>
using namespace std;

class Passenger
{
private:
	string name;
	Date dateOfBirth;
	array <int, 5>passengerTrips{}; 

public:
	Passenger();
	Passenger(string, int, int, int);
	bool checkTripsMaxedOut();
	void setName(string);
	string getName();
	void setDOB(int, int, int);
	void storeRRNum(int); //array that gets filled by reservation numbers
	int getRRNum(int);//get rrnum from passengerTrips array
	~Passenger();

};

