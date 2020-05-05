#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor():Person(), medicalLicense(" "), specialty(" ")
{
	listOfPatients = new Person*[50];
	for(int i =0; i<50 ; i++)
	{
		listOfPatients[i] = nullptr;
	}
}

Doctor::Doctor(int idNum, string nameString, string medicalLicenseString, string specialtyString)
	:Person(idNum, nameString), medicalLicense(medicalLicenseString), specialty(specialtyString)
{
	listOfPatients = new Person*[50];
	for(int i =0; i<50 ; i++)
	{
		listOfPatients[i] = nullptr;
	}
	
}

string Doctor::getMedicalLicense() {return medicalLicense;}
string Doctor::getSpecialty() {return specialty; }


void Doctor::addPatient(Person &p)
{
	//check if array has space
	//if it has space, add the patient to the next available space
	
	for(int i =0; i<50; i++)
	{
		if(listOfPatients[i]== nullptr)
			*listOfPatients[i] = p;
			break;
		if(i== 49)
			cout<<"Max amount of patients reached" <<endl;
	}
}


void Doctor::printPatients()
{
	for(int i=0; i < 50; i++)
	{
		if(listOfPatients[i] != nullptr)
			listOfPatients[i]->printInfo();
	}
	
}

void Doctor::printInfo()
{
	Person::printInfo();
	cout<<"Medical license: " <<medicalLicense <<endl;
	cout<<"Specialty: " <<specialty <<endl;
}