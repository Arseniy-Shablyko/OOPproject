#include "libraries.h"
class Point3D
{
private:
	int x;
	int y;
	int z;

	double length();

public:

	Point3D() : x(0), y(0), z(0) {}
	Point3D(int x, int y, int z) : x(x), y(y), z(z) {}

	int getX() { return x; }
	void setX(int x) { this->x = x; }

	int getY() { return y; }
	void setY(int y) { this->y = y; }

	int getZ() { return z; }
	void setZ(int z) { this->z = z; }

	string toString();

	bool operator==(Point3D point);
	bool operator!=(Point3D point);
	bool operator>(Point3D point);
	bool operator<(Point3D point);
	bool operator>=(Point3D point);
	bool operator<=(Point3D point);

	Point3D operator+(int value);
	Point3D operator-(int value);
	Point3D operator*(int value);
	Point3D operator/(int value);

	Point3D operator-();
	Point3D operator++();
	Point3D operator++(int);

};

