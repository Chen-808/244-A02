#include "ReferenceManager.h"

ReferenceManager::ReferenceManager( int capacity) //constructor
{
	refStorage = new RefObj[capacity];
	for(int i=0; i < capacity; i++) //initializes the array to empty referenceObjects
	{
		refStorage[i] = RefObj();
	}
	size = 0;
	range = capacity;
}

void ReferenceManager::addRef(Article a)	//add article to the array
{
	addToNextAvailablity(a);
}

void ReferenceManager::addRef(Book b)	//add book to the array
{
	addToNextAvailablity(b);
	
}

void ReferenceManager::addRef(Textbook t)	//add textbook to the array 
{
	addToNextAvailablity(t);
}


bool ReferenceManager::addToNextAvailablity(RefObj &ref) //checks if there is space available in the array, if yes -> add, if not -> don't add
{
	for(int i =0; i < range; i++ )
	{
		if((refStorage[i].getID() == 0)&& size <= range)
		{
			refStorage[i] = ref;
			size++;
			return true;
		}
	}
	return false;
}

int ReferenceManager::getRefObj(int pos) //gets reference ID at specific position
{
	return refStorage[pos].getID();
}

bool ReferenceManager::deleteRefObj(int pos) 
{
		RefObj emptyRef; //creates a default empty reference object which the pointer points to when it's "empty"
	
		if(pos <= range && refStorage[pos].getID() != 0)
		{
			
			refStorage[pos] = emptyRef; 
			size = size - 1;  
			return true;
		}
	return false;
}

bool ReferenceManager::search(int idNum) //searches if reference exists in the array
{
	for(int i = 0; i < range; i++)
	{
		if (refStorage[i].getID() == idNum)
		{
			return true;
		}
		
	}
	return false;
}

void ReferenceManager::printInfo()
{
	for(int i=0; i < range; i++)
	{
		if(refStorage[i].getID() != 0)
		{
			refStorage[i].printInfo();
		}
	}
	
}


