#include "Point3D.h"

int main() {
	Point3D point1(1, 1, 1), point2(2, 2, 2);

	cout << point1.toString() << " > "
		<< point2.toString() << " --> "
		<< (point1 > point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " <= "
		<< point2.toString() << " --> "
		<< (point1 <= point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " < "
		<< point2.toString() << " --> "
		<< (point1 < point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " >= "
		<< point2.toString() << " --> "
		<< (point1 >= point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " == "
		<< point2.toString() << " --> "
		<< (point1 == point2 ? "yes" : "no") << endl;

	cout << point1.toString() << " != "
		<< point2.toString() << " --> "
		<< (point1 != point2 ? "yes" : "no") << endl;

	return 0;
}