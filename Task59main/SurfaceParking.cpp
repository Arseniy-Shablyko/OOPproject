#include "SurfaceParking.h"
SurfaceParking::SurfaceParking() : SurfaceParking(1, 0, 0, "", false, true, false, "", 20) {
	
}
SurfaceParking::SurfaceParking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, 
	bool AvailabilityOfLight, bool PrecenceOfARoof, string Type, int Size) {
	type = Type;
	size = Size > 20 ? Size : size;
}

SurfaceParking::~SurfaceParking() {}

string SurfaceParking::getType() {
	return type;
}

void SurfaceParking::setType(string type) {
	type = this -> type;
}

int SurfaceParking::getSize() {
	return size;
}

void SurfaceParking::setSize(int size) {
	size = this->size;
}

string SurfaceParking::toString() {
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
	s += ", Size ";
	s += to_string(size) + "\n";

	return s;
}