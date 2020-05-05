#pragma once
#include "Reference.h"

class Article : public RefObj
{
private:
	int id, year, startPage, endPage;
	string title, author, journal;

public:

	Article();
	Article(int, int, int, int, string, string, string);
	void printInfo();
	int getNumberOfPages();
	
};

