#include "Bed.h"

int Bed::idGenerator = 1;


Bed::Bed()
{
	id = idGenerator;
	idGenerator ++;
	available = true;
}

int Bed::getId() const
{
	return id;
}

void Bed::setId(int id)
{
	this->id = id;
}

bool Bed::getAvailability() const
{
	return available;
}

void Bed::setAvailable(bool available)
{
	this->available = available;
}
