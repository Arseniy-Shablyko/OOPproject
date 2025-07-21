#include "Car.h"

int main(void) {
	string brand, model;
	int age;
	double price;
	
	cout << "Input brand of your car: ";
	cin >> brand;
	
	cout << "Input model of your car: ";
	cin >> model;
	
	cout << "Input age of your car: ";
	cin >> age;
	
	cout << "Input price of your car: ";
	cin >> price;
	Car car1(brand, model, age, price);
	
	cout << "\nInfo about your car:" << endl;
	cout << car1.getInfo() << endl;
	return 0;
}