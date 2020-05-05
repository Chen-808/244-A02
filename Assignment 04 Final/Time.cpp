#include "Time.h"
#include <iostream>
using namespace std;

Time::Time():hour(0), min(0), sec(0){}

Time::Time(int hourInt, int minInt, int secInt):hour(hourInt), min(minInt), sec(secInt){}

int Time::getHour(){return hour;}
int Time::getMin(){return min;}

void Time::printInfo()
{
	cout <<"Time (hour:min:sec): " <<hour <<":" <<min <<":" <<sec <<endl;
}

