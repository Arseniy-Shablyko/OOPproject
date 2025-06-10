#include "Initializer.h"

int main() {
	/*Parking parking1;
	Parking parking2(30);
	Parking parking3(30, 5);
	Parking parking4(30, 5, 2);
	Parking parking5(30, 5, 2, "Shpilevsky");
	Parking parking6(30, 5, 2, "Shpilevsky", true);
	Parking parking7(30, 5, 2, "Shpilevsky", true, false);
	Parking parking8(30, 5, 2, "Shpilevsky", false, true, false);

	cout << parking1.toString() << endl;
	cout << parking2.toString() << endl;
	cout << parking3.toString() << endl;
	cout << parking4.toString() << endl;
	cout << parking5.toString() << endl;
	cout << parking6.toString() << endl;
	cout << parking7.toString() << endl;
	cout << parking8.toString() << endl;*/

	/*Parking* parking = nullptr;
	Initializer initializer;

	int count;
	cout << "Input number of parkings: ";
	cin >> count;

	initializer.init(parking,count);

	for (int i = 0; i < count; i++) {
		cout << parking[i].toString() << endl;;

	}
	return 0;*/\

	int number_of_place, parking_fee, street_number;
	string street_name;
	bool security_systems, availability_of_lighting, presence_of_a_roof;

	Parking parking1;

	cout << "Input number of place: ";
	cin >> number_of_place;
	parking1.setNumberOfPlace(number_of_place);

	cout << "Input parking fee: ";
	cin >> parking_fee;
	parking1.setParkingFee(parking_fee);

	cout << "Input street number: ";
	cin >> street_number;
	parking1.setStreetNumber(street_number);

	cout << "Input street name: ";
	cin >> street_name;
	parking1.setStreetName(street_name);

	cout << "\nParking info : " << endl;
	cout << parking1.toString() << endl;


	return 0;
}