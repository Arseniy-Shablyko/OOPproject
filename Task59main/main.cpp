#include "Parking.h"

int main() {
	Parking parking1;
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
	cout << parking8.toString() << endl;

	return 0;
}