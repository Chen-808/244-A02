#pragma once
class Time
{
private:
	int hour;
	int min;
	int sec;


public:

	Time();
	Time(int, int, int);
	int	getHour();
	int getMin();
	
	void printInfo();

	
};

