#include "Outpatient.h"
#include <iostream>
using namespace std;

double Outpatient:: hospitalCharge = 3.00;
Outpatient::Outpatient():Person()
{
	appointmentDate = nullptr;

	appointmentTime = nullptr;

	doctorInCharge = nullptr;
}

Outpatient::Outpatient(int id, string name, Date* datePtr, Time* timePtr): Person(id, name), doctorInCharge(nullptr)
{
	appointmentDate = datePtr;
	appointmentTime = timePtr;
}


Outpatient::~Outpatient()
{	
	delete appointmentDate;
	delete appointmentTime;
	doctorInCharge = nullptr;
}

Date* Outpatient::getAppointmentDate() const
{
	return appointmentDate;
}

void Outpatient::setAppointmentDate(Date* appointmentDate)
{
	this->appointmentDate = appointmentDate;
}

Time* Outpatient::getAppointmentTime() const
{
	return appointmentTime;
}

void Outpatient::setAppointmentTime(Time* appointmentTime)
{
	this->appointmentTime = appointmentTime;
}

Doctor* Outpatient::getDoc() const
{
	return doctorInCharge;
}

void Outpatient::setDoc(Doctor* doc)
{
	this->doctorInCharge = doc;
}

void Outpatient::printInfo() const
{
	Person::printInfo();
	cout<< "Appointment Date: ";
	appointmentDate->printInfo();
	cout <<"Appointment Time: ";
	appointmentTime->printInfo();
	cout<<"Doctor" ;
	doctorInCharge->printInfo();
	cout<<"Hospital Charge:" <<hospitalCharge <<endl;
}
