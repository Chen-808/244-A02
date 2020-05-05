#include "Inpatient.h"
#include  <iostream>
using namespace std;

Inpatient::Inpatient(): admissionDate(nullptr), dischargeDate(nullptr), doctorInCharge(nullptr), bedNumber(0),
                        dailyCharge(0), Person()
{
}



Inpatient::Inpatient(Date* date1, Date* date2, double dailyCharge1, int id, string name): Person(id, name),
                                                                                          doctorInCharge(nullptr),
                                                                                          bedNumber(0)
{
	admissionDate = date1;
	dischargeDate = date2;
	dailyCharge = dailyCharge1;
}

Inpatient::~Inpatient()
{
	delete admissionDate;
	delete dischargeDate;
	doctorInCharge = nullptr;
	
}

Date* Inpatient::getAdmissionDate() const
{
	return admissionDate;
}

Date* Inpatient::getDischargeDate() const
{
	return dischargeDate;
}

Doctor* Inpatient::getDoctorInCharge() const
{
	return doctorInCharge;
}

int Inpatient::getBedNumber() const
{
	return bedNumber;
}

double Inpatient::getDailyCharge() const
{
	return dailyCharge;
}

void Inpatient::setAdmissionDate(Date* admissionDate)
{
	this->admissionDate = admissionDate;
}

void Inpatient::setDischargeDate(Date* dischargeDate)
{
	this->dischargeDate = dischargeDate;
}

void Inpatient::setDoctorInCharge(Doctor* doctorInCharge)
{
	this->doctorInCharge = doctorInCharge;
}

void Inpatient::setBedNumber(int bedNumber)
{
	this->bedNumber = bedNumber;
}

void Inpatient::setDailyCharge(double dailyCharge)
{
	this->dailyCharge = dailyCharge;
}

void Inpatient::printInfo()
{
	Person::printInfo();

	cout << "Admission Date : ";
	admissionDate->printInfo();
	cout << "Discharge date";
	dischargeDate->printInfo();
	cout << "Doctor :";
	doctorInCharge->printInfo();
	cout << "Bed number :" << bedNumber << endl;
	cout << "Daily charge:" << dailyCharge <<endl;
	
	
}
