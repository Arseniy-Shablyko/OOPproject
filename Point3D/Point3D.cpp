#include "Point3D.h"
string Point3D::toString() {
	return "x = " + to_string(x)
		+ ", y = " + to_string(y)
		+ ", z = " + to_string(z);
}

double Point3D::length() {
	return sqrt(x * x + y * y + z * z);
}

bool Point3D::operator==(Point3D point) {
	return x == point.x && y == point.y && z == point.z;
}

bool Point3D::operator!=(Point3D point) {
	return !(*this == point);
}

bool Point3D::operator>(Point3D point) {
	return length() > point.length();
}

bool Point3D::operator<(Point3D point) {
	return length() < point.length();
}

bool Point3D::operator>=(Point3D point) {
	return !(*this < point);
}

bool Point3D::operator<=(Point3D point) {
	return !(*this > point);
}

Point3D Point3D::operator+(int value) {
	return Point3D(x + value, y + value, z + value);
}

Point3D Point3D::operator-(int value) {
	return Point3D(x - value, y - value, z  - value);
}

Point3D Point3D::operator*(int value) {
	return Point3D(x * value, y * value, z * value);
}

Point3D Point3D::operator/(int value) {
	return Point3D(x / value, y / value, z / value);
}

Point3D Point3D::operator-() {
	return Point3D(-x, -y, -z);
}


Point3D Point3D::operator++() {
	++x;
	++y;
	++z;
	return Point3D(x, y, z);
}

Point3D Point3D::operator++(int) {
	Point3D point(x, y, z);
	++x;
	++y;
	++z;
	return point;
}