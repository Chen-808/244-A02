#include<iostream>
#include<array>
#include "ReservationManager.h"
#include "Date.h"
#include "Passenger.h"

using namespace std;

bool ReservationManager::ifSeatsAvailable(ReservationRequest* rr) 
{//checks if there are enough amount of seats available for the client's demand
	{
		for (int i = rr->getStartStationID(); i < rr->getEndStationID(); i++)
		{
			int seatsAvailable = 0;
			for (int j = 0; j < capacityTrain; j++)
			{
				if (openSeats[i][j] == 0)  
					seatsAvailable++;
			}
			if(seatsAvailable < rr->getNumberOfSeats())
			{
				return false;
			}
		}
		return true;
	}
	
}

void ReservationManager::assignSeats(ReservationRequest* rr)
{//fills 2D array of openSeats with reservationrequest numbers from their start station up to their end station
	for (int i = rr->getStartStationID(); i < rr->getEndStationID(); i++)
	{
		int seatsFilled = 0;
		for (int j = 0; j < capacityTrain; j++)
		{
			if (openSeats[i][j] == 0)
			{
				openSeats[i][j] = rr->getReservationNumber();
				seatsFilled++;
			}
			
			if (seatsFilled == rr->getNumberOfSeats())
			{
				break;
			}
		}
		
	}
}

void ReservationManager::reservationRequestListInsert(ReservationRequest* rr)
{ //fills reservationrequest array 
	for (int i = 0; i< 20;i++)
	{
		if(rrPointer[i] == nullptr)
		{
			rrPointer[i] = rr;
			break;
		}
	}
}

void ReservationManager::passengerListInsert(Passenger* p)
{// instert addres of passenger object in passenger array 
	if (!passengerListFinder(p))
	{
		for (int i = 0; i < 20; i++)
		{
			if (passengerPointer[i] == nullptr)
			{
				passengerPointer[i] = p;
				break;
			}
		}
	}
	
}

bool ReservationManager::passengerListFinder(Passenger* p)
{//finds a specific passenger
	for (int i = 0; i < 20; i++)
	{
		if (passengerPointer[i] == p)
		{
			return true;
		}
	}
	return false;
}

void ReservationManager::passengerReservationInsert(Passenger* p, ReservationRequest* rr)
{
	p->storeRRNum(rr->getReservationNumber());
}

ReservationManager::ReservationManager()
{
	travelDate.setDate(2020, 01, 01);
	capacityTrain = 0;
	stationRoute = 0;
	openSeats = nullptr;
	rrPointer = nullptr;
	passengerPointer = nullptr;
}

ReservationManager::ReservationManager(int year, int month, int day, int stations, int capacity)
{
	travelDate.setDate(year, month, day);
	stationRoute = stations;
	capacityTrain = capacity;
	rrPointer = new ReservationRequest* [20];
	for(int i = 0 ; i < 20 ; i++)
	{
		rrPointer[i] = nullptr;
	}
	passengerPointer = new Passenger* [20];
	for (int i = 0; i < 20; i++)
	{
		passengerPointer[i] = nullptr;
	}
	
	openSeats = new int* [stations];
	for (size_t j = 0; j < capacity; j++)
	{
		openSeats[j] = new int[capacity];
	}
	for (int i =0; i< stations;i++)
	{
		for( int j=0; j< capacity; j++)
		{
			openSeats[i][j] = 0;
		}
	}
}

int ReservationManager::check(ReservationRequest* rr)
{//allows reservation request to be processed by checking if there are enough seats available in the 2D array
	if (ifSeatsAvailable(rr))
	{
		return rr->getReservationNumber();
	}
	else
	{ //if not, return 0
		return 0;
	}
	
}

void ReservationManager::processReservationRequest(ReservationRequest* rr,Passenger* p)
{
	if ((check(rr) == 0)||(p->checkTripsMaxedOut()))
	{//if reservation request isn't processed through, delete the object
		delete rr;
		rr = nullptr;
	}
	else
	{//if processes through, 
	 // assigns seats to the passengers at each station
	 // inserts the reservation request into the reservationrequest array
	 // inserts the passenger into the passenger array
		assignSeats(rr);
		reservationRequestListInsert(rr);
		passengerListInsert(p);
		passengerReservationInsert(p, rr);
		
		
		
	}
	
}

void ReservationManager::printReservationRequest(ReservationRequest* rr)
{
	rr->printInfo();
}

void ReservationManager::cancelReservation(int rr)
{
	for (int i=0 ; i<20; i++)
	{	if (rrPointer[i] == nullptr)
			continue;
		if (rrPointer[i]->getReservationNumber() == rr)
		{
			delete rrPointer[i];
			rrPointer[i] = nullptr;
		}
	}

	
}

void ReservationManager::deleteExpiredReservationRequest(ReservationRequest* rr)
{
	if((travelDate.getMonth() > rr->getTravelMonth())&&(travelDate.getDay() > rr->getTravelDay()))
	{
		delete rr;
		rr =nullptr;
	}
}

void ReservationManager::deletePassengerOldRR(Passenger* client, ReservationRequest* rr)
{

	for (int i = 0; i < 5; i++)
	{
		if((client->getRRNum(i) == rr->getReservationNumber())&&(travelDate.getMonth() > rr->getTravelMonth())&&(travelDate.getDay() > rr->getTravelDay()))
		{//rr->~ReservationRequest();
			delete rr;
			rr = nullptr;
		}	
	}


}

void ReservationManager::printInfo()
{
	cout <<endl;
	cout<<"Travel date: " << travelDate.getYear() <<"/" <<travelDate.getMonth() <<"/" <<travelDate.getDay() << endl;
	cout<<"Train capacity: " <<capacityTrain <<endl;
	cout<<"Amount of stations: " <<stationRoute <<endl;
	for(int i =0; i <20; i++)
	{
		if(passengerPointer[i] != nullptr)
		{
			cout<< passengerPointer[i]->getName() << endl;
		}
	}

	for (size_t i = 0; i <20 ; i++)
	{
		if(rrPointer[i] != nullptr)
		{
			cout<<rrPointer[i]->getReservationNumber() <<endl;
		}

	}
}







