//Monica Chen 40022537
//Sergio Andres Angulo Ibarra 40134002
//IDE: Visual Studios

#include <iostream>
#include "ReferenceManager.h"
using namespace std;

int main()
{
	ReferenceManager rm(4);

	Article a1(001, 2000, 1, 11, "Article 1 Title", "Article 1 Author", "Article 1 journal");
	Article a2(002, 2000, 1, 21, "Article 2 Title", "Article 2 Author", "Article 2 journal");
	
	Book b1(101, 2010, 100, "Book 1 Title", "Book 1 Author", "Book 1 publisher");
	Book b2(102, 2010, 200, "Book 2 Title", "Book 2 Author", "Book 2 publisher");

	Textbook t1(201, 2020, 50, "textbook title", "textbook author", "textbook publisher", "textbook url");
	Textbook t2(203, 2020, 70, "textbook 2 title", "textbook 2 author", "textbook 2 publisher", "textbook 2 url");

	rm.addRef(a1);
	rm.addRef(a2);
	rm.addRef(b1);
	rm.addRef(b2);
	rm.addRef(t1); //doesn't show up because the array is full

	rm.printInfo();

	cout<< rm.search(001) <<endl; //search if refObj 001 exists in the array

	cout<< rm.getRefObj(2) <<endl; //returns the reference ID at position 2

	rm.deleteRefObj(1); //deletes the object at position 1

	rm.addRef(t2); //adds t2 to newly freed up position
	rm.printInfo();

	return 0;
}