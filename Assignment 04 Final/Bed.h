#pragma once
class Bed
{
private:
	int id;
	bool available;
	static int idGenerator;
	
public:
	Bed();

	int getId() const;
	void setId(int id);
	bool getAvailability() const;
	void setAvailable(bool available);
};

