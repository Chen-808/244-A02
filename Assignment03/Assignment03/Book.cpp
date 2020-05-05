#include "Book.h"
#include<iostream>
using namespace std;
Book::Book():RefObj()
{
	totalPages = 0;
	publisher = " ";
}

Book::Book(int idNum, int yearNum, int totalPagesNum, string titleString, string authorString, string publisherString):RefObj(idNum, yearNum, titleString, authorString)
{
	totalPages = totalPagesNum;
	publisher = publisherString;
}

void Book::setNumberOfPages(int totalPagesNum)
{
	totalPages = totalPagesNum;
}

void Book::setPublisher(string publisherString)
{
	publisher = publisherString;
}

int Book::getNumberOfPages()
{
	return totalPages;
}

string Book::getPublisher()
{
	return publisher;
}

void Book::printInfo()
{
	RefObj::printInfo();
	cout << "Total Pages: " << totalPages << endl;
	cout << "Publisher: " << publisher << endl;
}
