#pragma once
#include "Date.h"
#include "Passenger.h"
#include "ReservationRequest.h"


class ReservationManager
{
private:
	Date travelDate;
	int capacityTrain;
	int stationRoute;
	int** openSeats;	//2Darray with availability of seats per station per train
	ReservationRequest** rrPointer;
	Passenger** passengerPointer;

	bool ifSeatsAvailable(ReservationRequest*);
	void assignSeats(ReservationRequest*);
	void reservationRequestListInsert(ReservationRequest*);
	void passengerListInsert(Passenger*);
	bool passengerListFinder(Passenger*);
	void passengerReservationInsert(Passenger*, ReservationRequest*);

public:
	
	ReservationManager();
	ReservationManager(int currentYear, int currentMonth, int currentDay, int station, int capacity); 
	int check(ReservationRequest*);
	void processReservationRequest(ReservationRequest*, Passenger*);
	void printReservationRequest(ReservationRequest*); //outputs details about received rr number
	void cancelReservation(int); //cancels received rr num
	void deleteExpiredReservationRequest(ReservationRequest*); //deletes rr after travel date
	void deletePassengerOldRR(Passenger*, ReservationRequest*); //deletes old reservation requests of passenger
	void printInfo();


};


