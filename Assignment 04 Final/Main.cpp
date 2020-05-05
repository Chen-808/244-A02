//Monica Chen 40022537
//Sergio Andres Angulo Ibarra 40134002
//IDE: Visual studio
//
#include <iostream>
#include "Bed.h"
#include "Hospital.h"
#include "Inpatient.h"
#include "Outpatient.h"
#include "Person.h"
#include "Doctor.h"
#include "Time.h"
#include "Date.h"
using namespace std;

int main()
{

	Hospital aHospital;
	Date* d1= new Date(2020, 03, 10);
	Date* d2= new Date(2020, 03, 11);
	Date* d3= new Date(2020, 03, 12);
	Date* d4= new Date(2020, 04, 01);
	Date* d5= new Date(2020, 04, 18);
	Date* d6= new Date(2020, 04, 22);
	Date* d7 = new Date(2020, 04, 25);
	Date* d8 = new Date(2020, 04, 26);
	Date* d9 = new Date(2020, 04, 30);
	Date* d10 = new Date(2020, 05, 01);

	
	Time* t1 = new Time(13, 00, 00);
	Time* t2 = new Time(14, 00, 00);
	Time* t3= new Time(10, 00, 00);
	
	Doctor doctor1(001,"Sergio", "40134002", "surgeon");
	Doctor doctor2(002, "Mo", "40022537", "Neurology");

	Inpatient* inpatient1= new Inpatient(d1, d2, 100, 111, "Patient 1" );
	Inpatient* inpatient2= new Inpatient(d3, d4, 100, 222, "Patient 2" );
	Inpatient* inpatient3= new Inpatient(d5, d7, 100, 333, "Patient 3");
	Inpatient* inpatient4= new Inpatient(d6, d8, 100, 444, "Patient 4");
	
	Outpatient outpatient1(555,"Outpatient 1", d9, t1);
	Outpatient outpatient2(666, "Outpatient 2", d10, t2);

	
	aHospital.addDoctor(&doctor1);
	aHospital.addDoctor(&doctor2);

	aHospital.addInpatient(inpatient1);
	aHospital.addInpatient(inpatient2);
	aHospital.addInpatient(inpatient3);
	aHospital.addInpatient(inpatient4);

	aHospital.docToInpatient(&doctor1, inpatient1);
	aHospital.docToInpatient(&doctor1, inpatient2);
	aHospital.docToInpatient(&doctor2, inpatient3);
	aHospital.docToInpatient(&doctor2, inpatient4);

	aHospital.docToOutpatient(&doctor1, &outpatient1);
	aHospital.docToOutpatient(&doctor2, &outpatient2);

	aHospital.printDoctors();
	aHospital.printInpatients();

	aHospital.deleteInpatientFromList(111);
	aHospital.deleteInpatientFromList(222);

	aHospital.printInpatients();

	
	
	
	return 0;
}