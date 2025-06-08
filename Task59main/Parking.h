#pragma once
#include <iostream>
#include <string>
using namespace std;

class Parking
{
public:
	int number_of_place;
	int parking_fee;
	int street_number;
	string street_name;
	bool security_systems;
	bool availability_of_lighting;
	bool presence_of_a_roof;

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

	string toString() {
		string s = "Number of place " + to_string(number_of_place) + ", ";

		s += "Parking fee " + to_string(parking_fee) + ", ";
		s += "Street number " + to_string(street_number) + ", ";
		s += "Street name " + street_name + ", ";
		s += "Security systems ";
		s += security_systems ? "yes" : "no";
		s += ", Availability of lighting ";
		s += availability_of_lighting ? "yes" : "no";
		s += ", Presence of a roof ";
		s += presence_of_a_roof ? "yes\n" : "no\n";

		return s;
	}
};

