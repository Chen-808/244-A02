#pragma once
#include "Reference.h"
class Book:public RefObj
{
protected:
	int id, year, totalPages;
	string title, author, publisher;
	
public:
	Book();
	Book(int, int, int, string, string, string);
	void printInfo();
	void setNumberOfPages(int);
	int getNumberOfPages(); //return totalPages
	void setPublisher(string);
	string getPublisher();
};

