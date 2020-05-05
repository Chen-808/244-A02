#pragma once
#include "Person.h"
#include "Date.h"
#include "Doctor.h"
#include  "Bed.h"
class Inpatient :
	public Person
{
private:
	Date* admissionDate;
	Date* dischargeDate;
	Doctor* doctorInCharge;
	int bedNumber;
	double dailyCharge;
	
public:
	Inpatient();
	Inpatient(Date*, Date*, double, int, string);
	
	~Inpatient();
	Date* getAdmissionDate() const;
	Date* getDischargeDate() const;
	Doctor* getDoctorInCharge() const;
	int getBedNumber() const;
	double getDailyCharge() const;
	void setAdmissionDate(Date* admissionDate);
	void setDischargeDate(Date* dischargeDate);
	void setDoctorInCharge(Doctor* doctorInCharge);
	void setBedNumber(int bedNumber);
	void setDailyCharge(double dailyCharge);
	void printInfo();
};

