#include <iostream>
#include "ReservationRequest.h"
#include "Date.h"
#include "Passenger.h"
using namespace std;

int ReservationRequest::rrCounter = 0;
int ReservationRequest::stringToID(string station)
{
	if (station == "montreal")
	{
		return 0;
	}

	else if (station == "dorval")
	{
		return 1;
	}


	else if (station == "brockville")
	{
		return 2;
	}

	else if (station == "kingston")
	{
		return 3;
	}

	else if(station == "belleville")
	{
		return 4;
	}

	else 
		return 5;

}
ReservationRequest::ReservationRequest()
{
	client = new Passenger ();
	client->setName(" ");
	client->setDOB(0, 0, 0);
	travelDate.setDate(2020, 01, 01);
	startStation = " ";
	destination = " ";
	numberOfSeats = 0;
	reservationNumber = 0;
	startStationID = 0;
	endStationID = 0;
}

ReservationRequest::ReservationRequest(Passenger* customer, int year, int month, int day, string startStn, string endStn, int num)
{
	rrCounter++;
	client = customer;
	travelDate.setDate(year, month, day);
	startStation = startStn;
	destination = endStn;
	numberOfSeats = num;
	reservationNumber = rrCounter;
	startStationID = stringToID(startStn);
	endStationID = stringToID(endStn);
}

void ReservationRequest::setReservationNumber(int rrNum)
{
	reservationNumber = rrNum;

}

int ReservationRequest::getReservationNumber()
{
	return reservationNumber;
}

int ReservationRequest::getNumberOfSeats()
{
	return numberOfSeats;
}

int ReservationRequest::getStartStationID()
{
	return	startStationID;
}

int ReservationRequest::getEndStationID()
{
	return	endStationID;
}

void ReservationRequest::printInfo()
{
	cout << "Customer: " << client->getName() << endl;
	cout << "Reservation Number: " << reservationNumber << endl;
	cout << "Travel date:" << travelDate.getDay() << " " << travelDate.getMonth() << " "<< travelDate.getYear() << endl;
	cout << "Start station: " << startStation << endl;
	cout << "End station: " << destination << endl;
	cout << "Number of seats reserved: " << numberOfSeats << endl;
}

int ReservationRequest::getTravelDay()
{
	return travelDate.getDay();
}

int ReservationRequest::getTravelMonth()
{
	return travelDate.getMonth();
}


ReservationRequest::~ReservationRequest()
{
	cout<<"ReservationRequest deleted" <<endl;
}