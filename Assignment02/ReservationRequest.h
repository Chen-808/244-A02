#pragma once
#include "Date.h"
#include "Passenger.h"
#include <string>
class ReservationRequest
{
private:
	Passenger* client;
	static int rrCounter;
	int reservationNumber; //give this num to passenger
	Date travelDate;
	string startStation;
	string destination;
	int startStationID;
	int endStationID;
	int numberOfSeats;
	int stringToID(string); //converts string of station to int

public:

	ReservationRequest();
	ReservationRequest(Passenger*, int yearTravel, int monthTravel, int dayTravel, string, string, int);
	void printInfo();

	int getReservationNumber();
	void setReservationNumber(int);
	int getNumberOfSeats();
	int getStartStationID();
	int getEndStationID();
	int getTravelDay(); 
	int getTravelMonth();
	~ReservationRequest();


};
