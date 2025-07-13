#include "Parking.h"
#include "UndergroundParking.h"
#include "SurfaceParking.h"

int main() {
	Parking parking1;

	int value = 7;
	cout << "Value = " << value << endl;

	cout << "Parking 1 before: " << parking1.toString() << endl;
	parking1 = parking1 + value;
	cout << "Parking 1 after: " << parking1.toString() << endl;

	cout << "Parking 1 before: " << parking1.toString() << endl;
	parking1 = parking1 - value;
	cout << "Parking 1 after: " << parking1.toString() << endl;

	value = 2;
	cout << "Value = " << value << endl;

	cout << "Parking 1 before: " << parking1.toString() << endl;
	parking1 = parking1 * value;
	cout << "Parking 1 after: " << parking1.toString() << endl;

	cout << "Parking 1 before: " << parking1.toString() << endl;
	parking1 = parking1 / value;
	cout << "Parking 1 after: " << parking1.toString() << endl;

	return 0;
}