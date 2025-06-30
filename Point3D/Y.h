#pragma once
#include "libraries.h"
class Y
{
private:
	int y;
public:
	Y();
	Y(int y);
	~Y();

	int getY();
	void setY(int y);

	int operator +(int value) {
		return y + value;
	}

	int operator -(int value) {
		return y - value;
	}

	int operator *(int value) {
		return y * value;
	}

	int operator /(int value) {
		return y / value;
	}

	string toString();
};

