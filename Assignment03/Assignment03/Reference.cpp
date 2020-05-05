#include "Reference.h"


RefObj::RefObj()
{
	id = 0;
	year = 0;
	title = " ";
	author = " ";
	
}

RefObj::RefObj(int idNum, int yearNum, string titleString, string authorString)
{
	id = idNum;
	year = yearNum;
	title = titleString;
	author = authorString;
	
}

int RefObj :: getID()
{
	return id;
}

void RefObj::printInfo()
{
	cout << endl;
	cout << "Identifier: " << id << endl;
	cout << "Year of publication: " << year << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
}
