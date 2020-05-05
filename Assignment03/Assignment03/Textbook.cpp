#include "Textbook.h"
#include <iostream>
using namespace std;
Textbook::Textbook():Book()
{
	web = " ";
}

Textbook::Textbook(int idNum, int yearNum, int totalPagesNum, string titleString, string authorString, string publisherString, string webString) :Book(idNum, yearNum, totalPagesNum, titleString, authorString, publisherString)
{
	web = webString;
}

void Textbook::setWeb(string webString)
{
	web = webString;
}

string Textbook::getWeb()
{
	return web;
}



void Textbook::printInfo()
{
	Book::printInfo();
	cout << "Web URL: " << web << endl;
}


