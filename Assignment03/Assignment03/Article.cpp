#include "Article.h"

Article::Article():RefObj()
{
	startPage = 0;
	endPage = 0;
	journal = " ";
}

Article::Article(int idNum, int yearNum, int startPageNum, int endPageNum, string titleString, string authorString, string journalString):RefObj(idNum, yearNum, titleString, authorString)
{
	startPage = startPageNum;
	endPage = endPageNum;
	journal = journalString;
	
}

void Article::printInfo()
{
	RefObj::printInfo();
	cout << "Journal: " << journal << endl;
	cout << "Start Page: " << startPage << endl;
	cout << "End page: " << endPage << endl;
	
}

int Article::getNumberOfPages()
{
	return (endPage - startPage);
}