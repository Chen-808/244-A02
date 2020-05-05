#pragma once
#include "Article.h"
#include "Book.h"
#include "Textbook.h"
#include "Reference.h"
#include <array>
#include <iostream>
;

class ReferenceManager
{
private:

	int range;
	RefObj* refStorage;
	int size; //track amount of references in array
	
	
public:
	ReferenceManager(int);
	void addRef(Article);
	void addRef(Book);
	void addRef(Textbook);

	bool addToNextAvailablity(RefObj&);
	int getRefObj(int); //argument: position in refmanager returns: refObj ID
	bool deleteRefObj(int);
	bool search(int);

	void printInfo();
};

