#pragma once
#include <iostream>
using namespace std;

class RefObj
{
protected:

	int id, year;
	string title, author;

public:

	RefObj();
	RefObj(int, int, string, string);
	int getID();
	void printInfo();
	
	
};

