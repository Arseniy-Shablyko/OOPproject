#pragma once
#include "libraries.h"

class X
{
private:
	int x;
public:
	X();
	X(int x);
	~X();

	int getX();
	void setX(int x);

	int operator +(int value) {
		return x + value;
	}

	int operator -(int value) {
		return x - value;
	}

	int operator *(int value) {
		return x * value;
	}

	int operator /(int value) {
		return x / value;
	}

	string toString();
};

