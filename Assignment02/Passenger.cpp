#include<iostream>
#include "Passenger.h"
#include "date.h"
#include "ReservationRequest.h"
#include "ReservationManager.h"
#include <array>
using namespace std;

Passenger::Passenger()
{
	name = " ";
	dateOfBirth.setDate(2020, 01, 01);
	passengerTrips.fill(0);

}

Passenger::Passenger(string nameReceived, int year, int month, int day)
{
	name = nameReceived;
	dateOfBirth.setDate(year, month, day);
	passengerTrips.fill(0);
}

bool Passenger::checkTripsMaxedOut()
{
	for (size_t i = 0; i< passengerTrips.size(); i++)
	{
		if (passengerTrips[i] == 0)
		{
			return false;
		}
			
	}
	return true;
}

void Passenger::setName(string a)
{
	name = a;
}

string Passenger:: getName()
{
	return name;
}

void Passenger::setDOB(int year, int month, int day)
{
	dateOfBirth.setDate(year, month, day);
}

void Passenger::storeRRNum(int a) //reservationrequest num = a
{
	for (int i =0; i < passengerTrips.size(); i++)
	{

		if (passengerTrips[i] == 0) //the first 0 the loop encounters, it fills it with the reservationrequest number
		{
			passengerTrips[i] = a;
				break;
		}
		

		if ((passengerTrips[i] != 0) && ( i==(passengerTrips.size() - 1)))
		{
			cout << "trips maxed out"<<endl;
			
		}
		
		
	}

	
}

int Passenger::getRRNum(int i)
{
	return passengerTrips[i];
}

Passenger::~Passenger()
{
	cout << "Passenger:" << name << " deleted" << endl;
}
