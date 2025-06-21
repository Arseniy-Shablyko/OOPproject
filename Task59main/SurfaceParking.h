#pragma once
#include "Parking.h"
class SurfaceParking : public Parking
{
private:
	string type;
	int size;
public:
	SurfaceParking();
	SurfaceParking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight, bool PrecenceOfARoof, string type, int size);
	~SurfaceParking();

	string getType();
	void setType(string type);
	int getSize();
	void setSize(int size);

	string toString();
};

