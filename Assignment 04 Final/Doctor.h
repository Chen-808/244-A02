#pragma once
#include "Person.h"
#include <iostream>
using namespace std;

class Doctor :
	public Person
{
private:
	string  medicalLicense;
	string specialty;
	Person** listOfPatients;

public:
	Doctor();
	Doctor(int, string, string, string);

	string getMedicalLicense();
	string getSpecialty();

	void addPatient(Person&);
	
	void printPatients();
	void printInfo();

	
};

