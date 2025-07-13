#include "Parking.h"

int Parking::getNumberOfPlace() {
	return number_of_place;
}
void Parking::setNumberOfPlace(int number_of_place) {
	if (number_of_place >= 1 && number_of_place <= 50) {
		this->number_of_place = number_of_place;
	}
}

int Parking::getParkingFee() {
	return parking_fee;
}
void Parking::setParkingFee(int parking_fee) {
	if (parking_fee >= 0 && parking_fee <= 15) {
		this->parking_fee = parking_fee;
	}
}

int Parking::getStreetNumber() {
	return street_number;
}
void Parking::setStreetNumber(int street_number) {
	if (street_number >= 0 && street_number <= 2) {
		this->street_number = street_number;
	}
}

string Parking::getStreetName() {
	return street_name;
}
void Parking::setStreetName(string street_name) {
	this->street_name = street_name;
}

bool Parking::isSecuritySystems() {
	return security_systems;
}

void Parking::setSecuritySystems(bool security_systems) {
	this->security_systems = security_systems;
}

bool Parking::isAvailabilityOfLighting() {
	return availability_of_lighting;
}

void Parking::setAvailabilityOfLighting(bool availability_of_lighting) {
	this->availability_of_lighting = availability_of_lighting;
}

bool Parking::isPresenceOfARoof() {
	return presence_of_a_roof;
}

void Parking::setPresenceOfARoof(bool presence_of_a_roof) {
	this->presence_of_a_roof = presence_of_a_roof;
}


Parking::Parking() {
	number_of_place = 20;
	parking_fee = 0;
	street_number = 1;
	street_name = "no name";
	security_systems = false;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = 0;
	street_number = 1;
	street_name = "no name";
	security_systems = false;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = 1;
	street_name = "no name";
	security_systems = false;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee, int StreetNumber) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = StreetNumber < 0 ? 0 : StreetNumber;;
	street_name = "no name";
	security_systems = false;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = StreetNumber < 0 ? 0 : StreetNumber;
	street_name = StreetName;
	security_systems = false;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = StreetNumber < 0 ? 0 : StreetNumber;
	street_name = StreetName;
	security_systems = SecuritySystem;
	availability_of_lighting = true;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = StreetNumber < 0 ? 0 : StreetNumber;
	street_name = StreetName;
	security_systems = SecuritySystem;
	availability_of_lighting = AvailabilityOfLight;
	presence_of_a_roof = false;
}

Parking::Parking(int NumberOfPlace, int ParkingFee, int StreetNumber, string StreetName, bool SecuritySystem, bool AvailabilityOfLight, bool PrecenceOfARoof) {
	number_of_place = NumberOfPlace < 1 ? 1 : NumberOfPlace;
	parking_fee = ParkingFee < 0 ? 0 : ParkingFee;
	street_number = StreetNumber < 0 ? 0 : StreetNumber;
	street_name = StreetName;
	security_systems = SecuritySystem;
	availability_of_lighting = AvailabilityOfLight;
	presence_of_a_roof = PrecenceOfARoof;
}

Parking::Parking(const Parking& parking) {
	number_of_place = parking.number_of_place;
	parking_fee = parking.parking_fee;
	street_number = parking.street_number;
	street_name = parking.street_name;
	security_systems = parking.security_systems;
	availability_of_lighting = parking.availability_of_lighting;
	presence_of_a_roof = parking.presence_of_a_roof;
}

Parking::~Parking() {}

Parking Parking::operator+(int value) {
	return Parking(number_of_place + value, parking_fee + value);
}

Parking Parking::operator-(int value) {
	return Parking(number_of_place - value, parking_fee - value);
}

Parking Parking::operator*(int value) {
	return Parking(number_of_place * value, parking_fee * value);
}

Parking Parking::operator/(int value) {
	return Parking(number_of_place / value, parking_fee / value);
}


string Parking::toString() {
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