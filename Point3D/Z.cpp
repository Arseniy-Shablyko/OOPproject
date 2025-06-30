#include "Z.h"
Z::Z() {
	z = 0;
}
Z::Z(int z) {
	this->z = z;
}
Z::~Z() {}

int Z::getZ() {
	return z;
}
void Z::setZ(int z) {
	this->z = z;
}

string Z::toString() {
	string s = "Z = " + to_string(z);
	return s;
}