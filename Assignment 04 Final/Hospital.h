#include "Bed.h"
#include "Inpatient.h"
#include "Doctor.h"
#include "Outpatient.h"
#include <iostream>
using namespace std;

class Hospital
{

private:
	Inpatient** listOfInpatients;
	Bed** listOfBeds;
	Doctor** listOfDoctors;
	
public:
	Hospital();
	void addInpatient(Inpatient*);
	void addBed(Bed*); //assign bed to inpatient (bool for bed flag)
	void addDoctor(Doctor*);


	void deleteInpatientFromList(int);//delete patient from array listOfInpatients
	void setBedAvailability(int);//set bed to available 

	void docToInpatient(Doctor*, Inpatient*); //asign doctor to inpatient
	void docToOutpatient(Doctor*, Outpatient*);//assign doctor to outpatient
	
	void printInpatients();//print list of all Inpatients
	void printDoctors();//print list of all doctors

	
};