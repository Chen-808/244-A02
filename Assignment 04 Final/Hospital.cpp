#include "Hospital.h"
#include <iostream>
using namespace std;
Hospital::Hospital()
{
	listOfInpatients = new Inpatient*[500];
	for(int i=0; i<500; i++)
	{
		listOfInpatients[i] = nullptr;
	}
	
	listOfBeds = new Bed*[500];
	for(int i=0; i<500; i++)
	{
		listOfBeds[i] = nullptr;
	}
	listOfDoctors = new Doctor*[500];
	for(int i=0; i<500; i++)
	{
		listOfDoctors[i] = nullptr;
	}
}

void Hospital::addInpatient(Inpatient* patient)
{
	Bed* aBed;
	aBed = new Bed;
	
	for(int i=0; i< 500; i++)
	{
		if(listOfInpatients[i] == nullptr)
		{
			listOfInpatients[i]= patient;
			addBed(aBed); //adds a bed to the array addBed
			listOfInpatients[i]->setBedNumber(aBed ->getId()); //assigns a bed to an inpatient
			break;
		}
		if (i == 500)
		cout<<"Max amount of inpatients has been reached" <<endl;
	}
	

}

void Hospital::addBed(Bed* aBed) //function called by inside addInpatient
{
	for(int i = 0; i<500; i++)
	{
		if(listOfBeds[i] == nullptr)
		{
			listOfBeds[i]= aBed;
			listOfBeds[i]->setAvailable(false);
			break;
		}
	}
}

void Hospital::addDoctor(Doctor * aDoctor) //adds doctor to doctor array
{
	for(int i=0; i <100; i++)
	{
		if(listOfDoctors[i] == nullptr)
		{
			listOfDoctors[i] = aDoctor;
			break;
		}
		
	}
}

void Hospital::deleteInpatientFromList(int id1) //remove inpatient from the list
{
	for (int i = 0; i<500; i++)
	{
		if (listOfInpatients[i] != nullptr)
		{
			if (listOfInpatients[i]->getId() == id1)
			{
				setBedAvailability(listOfInpatients[i]->getBedNumber());
				delete listOfInpatients[i];
				listOfInpatients[i] = nullptr;
				break;
			}
		}
		if(i==500)
		cout<<"There were no inpatients in the hospital with id: "<<id1 <<endl;
	}
}




void Hospital::setBedAvailability(int id2)
{
	for (int i = 0; i<500; i++)
	{
		if (listOfBeds[i]->getId() == id2)
		{
			listOfBeds[i]->setAvailable(true);
			break;
		}
		else
			cout<<"There were no beds in the hospital with id: "<< id2 <<endl;
	}
}

void Hospital::docToInpatient(Doctor* doc, Inpatient* aPatient)
{
	aPatient->setDoctorInCharge(doc);
	
}

void Hospital::docToOutpatient(Doctor* doc, Outpatient* aPatient)
{
	aPatient->setDoc(doc); 
}

void Hospital::printInpatients()
{
	for(int i=0; i< 500; i++)
	{
		if(listOfInpatients[i]!= nullptr)
			listOfInpatients[i]-> printInfo();
	}
	cout << "------------------------------------------------------------------------------------------" << endl;
}

void Hospital::printDoctors()
{
	for(int i=0; i < 500; i++)
	{
		if(listOfDoctors[i] != nullptr)
			listOfDoctors[i] ->printInfo();
	}
	cout << "-------------------------------------------------------------------------------------------" << endl;
	
}