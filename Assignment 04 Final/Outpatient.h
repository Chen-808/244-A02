#pragma once
#include <iostream>
#include "Person.h"
#include "Date.h"
#include "Time.h"
#include "Doctor.h"
using namespace std;

class Outpatient :
	public Person
{
private:

	Date* appointmentDate;
	Time* appointmentTime;
	static double hospitalCharge;
	Doctor* doctorInCharge;
	

public:
	Outpatient();
	Outpatient(int, string, Date*, Time*);
	
	~Outpatient();

	Date* getAppointmentDate() const;
	void setAppointmentDate(Date* appointmentDate);
	Time* getAppointmentTime() const;
	void setAppointmentTime(Time* appointmentTime);
	Doctor* getDoc() const;
	void setDoc(Doctor* doc);
	void printInfo() const;

};

