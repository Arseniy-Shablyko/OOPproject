#include "X.h"
X::X() {
	x = 0;
}
X::X(int x) {
	this->x = x;
}
X::~X() {}

int X::getX() {
	return x;
}
void X::setX(int x) {
	this->x = x;
}

string X::toString() {
	string s = "X = " + to_string(x);
	return s;
}