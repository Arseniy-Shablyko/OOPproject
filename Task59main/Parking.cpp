#include "Parking.h"
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