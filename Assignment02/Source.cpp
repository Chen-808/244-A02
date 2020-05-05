//Monica Chen 40022537
//Sergio Andres Angulo Ibarra 40134002
//IDE visual studio community

#include "Date.h"
#include "Passenger.h"
#include "ReservationManager.h"
#include "ReservationRequest.h"


int main()
{
	Passenger* client1 = new Passenger("Name", 2000, 01, 01);


	ReservationRequest* rr1 = new ReservationRequest(client1, 2020, 02, 15, "montreal", "toronto", 3);

	rr1->printInfo();

	ReservationRequest* rr2 = nullptr;
	rr2 = new ReservationRequest(client1,2020,02,15, "montreal", "toronto", 3);

	rr2->printInfo();
	
	ReservationManager rm(2020,10,10,6,6);
	rm.processReservationRequest(rr1, client1);
	rm.processReservationRequest(rr2, client1);

	rm.printInfo();

	rm.cancelReservation(1);
	
	rm.printInfo();

	
	
}