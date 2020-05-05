#include <iostream>
using namespace std;
#pragma once
class Person
{
	
private:
	int id;
	string name;

public:
	virtual ~Person();

	Person();
	Person(int, string);

	
	int getId();
	string getName();
	void setId(int);
	void setName(string);
	virtual void printInfo() const;
	
};



