#pragma once
#include <iostream>
#include <string>
using namespace std;

class Parking
{
private:
	int number_of_place;
	int parking_fee;
	int street_number;
	string street_name;
	bool security_systems;
	bool availability_of_lighting;
	bool presence_of_a_roof;
public:
	int getNumberOfPlace();
	void setNumberOfPlace(int number_of_place);

	int getParkingFee();
	void setParkingFee(int parking_fee);

	int getStreetNumber();
	void setStreetNumber(int street_number);

	string getStreetName();
	void setStreetName(string street_name);

	bool isSecuritySystems();
	void setSecuritySystems(bool security_systems);

	bool isAvailabilityOfLighting();
	void setAvailabilityOfLighting(bool availability_of_lighting);

	bool isPresenceOfARoof();
	void setPresenceOfARoof(bool presence_of_a_roof);

	Parking();
	Parking(int NumberOfPlace);
	Parking(int NumberOfPlace, int ParkingFee);
	Parking(int NumberOfPlace, int ParkingFee, int StreetNumber);
	Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName);
	Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem);
	Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight);
	Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight, bool PrecenceOfARoof);
	Parking(const Parking& parking);

	~Parking();

	Parking operator +(int value);
	Parking operator -(int value);
	Parking operator *(int value);
	Parking operator /(int value);

	string toString();
};

