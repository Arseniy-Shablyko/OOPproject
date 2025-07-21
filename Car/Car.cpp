#include "Car.h"
Car::Car() {
	brand = "null";
	model = "null";
	age = 1;
	price = 0.1;
}
Car::Car(string brand, string model) {
	this->brand = brand;
	this->model = model;
	age = 1;
	price = 0.1;
}
Car::Car(string brand, string model, int age, double price) {
	this->brand = brand;
	this->model = model;
	this->age = age > 0 ? age : 1;
	this->price = price > 0 ? price : 0.1;
}
Car::~Car() {}

string Car::getBrand() {
	return brand;
}
void Car::setBrand(string brand) {
	this->brand = brand;
}

string Car::getModel() {
	return model;
}
void Car::setModel(string model) {
	this->model = model;
}

int Car::getAge() {
	return age;
}
void Car::setAge(int age) {
	this->age = age > 0 ? age : 1;
}

double Car::getPrice() {
	return price;
}
void Car::setPrice(double price) {
	this->price = price > 0 ? price : 0.1;
}

string Car::getInfo() {
	string s = "Brand - " + brand;
	s+= ", Model - " + model;
	s += ", Age = " + to_string(age);
	s += ", Price = " + to_string(price);

	return s;
}

