#include "Initializer.h"

void Initializer::init(Parking*& parking, int count) {
	if (parking == nullptr && count > 0) {
		parking = new Parking[count];
	}

	string streets_names[]{ "Shpilevsky", "Aerodromnaya", "Belarusian",
		"Library", "Upper", "Vitebsk" };

	int max_number_of_place = 50;
	int min_number_of_place = 1;

	int max_parking_fee = 15;
	int min_parking_fee = 0;

	int max_street_number = 2;
	int min_street_number = 0;

	for (int i = 0; i < count; i++) {
		parking[i].setStreetName(streets_names[rand() % 6]);

		parking[i].setNumberOfPlace(rand() % (max_number_of_place - min_number_of_place + 1) + min_number_of_place);
		parking[i].setParkingFee(rand() % (max_parking_fee - min_parking_fee + 1) + min_parking_fee);
		parking[i].setStreetNumber(rand() % (max_street_number - min_street_number + 1) + min_street_number);
	}
}
