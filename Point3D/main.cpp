#include "X.h"
#include "Y.h"
#include "Z.h"

int main() {
	int value = 7;

	X x;
	cout << x.toString() << endl;

	x.setX(x.getX()  + value);
	cout << x.toString() << endl;

	value = 2;
	x.setX(x.getX() - value);
	cout << x.toString() << endl;

	x.setX(x.getX() * value);
	cout << x.toString() << endl;

	x.setX(x.getX() / value);
	cout << x.toString() << endl;

	cout << "\n";

	value = 7;

	Y y;
	cout << y.toString() << endl;

	y.setY(y.getY() + value);
	cout << x.toString() << endl;

	value = 2;
	y.setY(y.getY() - value);
	cout << x.toString() << endl;

	y.setY(y.getY() * value);
	cout << y.toString() << endl;

	y.setY(y.getY() / value);
	cout << y.toString() << endl;

	cout << "\n";

	value = 7;

	Z z;
	cout << z.toString() << endl;

	z.setZ(z.getZ() + value);
	cout << z.toString() << endl;

	value = 2;
	z.setZ(z.getZ() - value);
	cout << x.toString() << endl;

	z.setZ(z.getZ() * value);
	cout << z.toString() << endl;

	z.setZ(z.getZ() / value);
	cout << z.toString() << endl;




	return 0;
}