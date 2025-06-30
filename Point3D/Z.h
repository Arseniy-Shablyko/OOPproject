#pragma once
#include "libraries.h"

class Z
{
private:
	int z;
public:
	Z();
	Z(int z);
	~Z();

	int getZ();
	void setZ(int z);

	int operator +(int value) {
		return z + value;
	}

	int operator -(int value) {
		return z - value;
	}

	int operator *(int value) {
		return z * value;
	}

	int operator /(int value) {
		return z / value;
	}

	string toString();
};

