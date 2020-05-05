#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

Date::Date()
{
	day = 1;
	month = 1;
	year = 2020;
}

Date::Date(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}

void Date::setDate(int c, int b, int a) //20201231
{
	day = a;
	month = b;
	year = c;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}

void Date::printInfo()
{
	cout << year << "/" <<month <<"/" <<day << endl;
}
