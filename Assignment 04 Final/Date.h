#pragma once
class Date
{
private:
	int year;
	int month;
	int day;

	
public:
	Date();
	Date(int, int, int);
	~Date();


	int getDay();
	int getMonth();

	void printInfo();
};

