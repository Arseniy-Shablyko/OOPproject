#include "UndergroundParking.h"
UndergroundParking::UndergroundParking() : UndergroundParking(1, 0, 0, "", false, true, false, "", 100) {

}
UndergroundParking::UndergroundParking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem,
	bool AvailabilityOfLight, bool PrecenceOfARoof, string Type, int Size) {
	type = Type;
	square = Size > 100 ? Size : square;
}

UndergroundParking::~UndergroundParking() {}

string UndergroundParking::getType() {
	return type;
}

void UndergroundParking::setType(string type) {
	type = this->type;
}

int UndergroundParking::getSquare() {
	return square;
}

void UndergroundParking::setSquare(int square) {
	square = this->square;
}

string UndergroundParking::toString() {
	string s = "Number of place " + to_string(getNumberOfPlace()) + ", ";

	s += "Parking fee " + to_string(getParkingFee()) + ", ";
	s += "Street number " + to_string(getStreetNumber()) + ", ";
	s += "Street name " + getStreetName() + ", ";
	s += "Security systems ";
	s += isSecuritySystems() ? "yes" : "no";
	s += ", Availability of lighting ";
	s += isAvailabilityOfLighting() ? "yes" : "no";
	s += ", Presence of a roof ";
	s += isPresenceOfARoof() ? "yes" : "no";
	s += ", Type ";
	s += type;
	s += ", Square ";
	s += to_string(square) + "\n";

	return s;
}