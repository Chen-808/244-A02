#pragma once
#include<string>
using namespace std;
class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	int getMonth();
	int getDay();
	int getYear();
	void printInfo();
};
 
