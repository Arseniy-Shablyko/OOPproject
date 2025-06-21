#pragma once
#include "Parking.h"
class UndergroundParking : public Parking
{
private:
	string type;
	int square;
public:
	UndergroundParking();
	UndergroundParking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight, bool PrecenceOfARoof, string type, int size);
	~UndergroundParking();

	string getType();
	void setType(string type);
	int getSquare();
	void setSquare(int square);

	string toString();
};

