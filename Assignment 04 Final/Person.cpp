#include "Person.h"
#include <iostream>
using namespace std;

Person::~Person()
= default;

Person::Person()
{
	id = 0;
	name = "";
}

Person::Person(int idNum, string nameString)
{
	id = idNum;
	name = nameString;
}

int Person::getId()
{
	return id;
}

string Person::getName()
{
	return name;
}

void Person::setId(int id1)
{
	id = id1;
}

void Person::setName(string name1)
{
	name = name1;
}

 void Person:: printInfo()const
{
	cout<<"Name: " <<name <<endl;
	cout<<"Id: " <<id <<endl;
}