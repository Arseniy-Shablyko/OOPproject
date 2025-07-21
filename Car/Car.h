#pragma once
#include "libraries.h"
class Car
{
private:
	string brand;
	string model;
	int age;
	double price;
public:
	Car();
	Car(string brand, string model);
	Car(string brand, string model, int age, double price);
	~Car();

	string getBrand();
	void setBrand(string brand);

	string getModel();
	void setModel(string model);

	int getAge();
	void setAge(int age);

	double getPrice();
	void setPrice(double price);

	string toInfo();
};

