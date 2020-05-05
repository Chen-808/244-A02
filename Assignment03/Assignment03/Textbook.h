#pragma once
#include <iostream>
#include "Book.h"
using namespace std;
class Textbook: public Book
{
private:
	int id, year, totalPages;
	string title, author, publisher, web;

public:
	Textbook();
	Textbook(int, int, int, string, string, string, string);
	void printInfo();
	void setWeb(string);
	string getWeb();
	
};

