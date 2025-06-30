#include "Y.h"
Y::Y() {
	y = 0;
}
Y::Y(int y) {
	this->y = y;
}
Y::~Y() {}

int Y::getY() {
	return y;
}
void Y::setY(int y) {
	this->y = y;
}

string Y::toString() {
	string s = "Y = " + to_string(y);
	return s;
}