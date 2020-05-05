#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(): year(00), month(01), day(01){}

Date::Date(int yearInt, int monthInt, int dayInt): year(yearInt), month(monthInt), day (dayInt){}

Date::~Date()
= default;


int Date::getDay(){return day;}

int Date::getMonth(){return month;}

void Date::printInfo()
{
	cout<<"Date(year/month/day):  " <<year <<"/"<<month <<"/" <<day <<endl;
}