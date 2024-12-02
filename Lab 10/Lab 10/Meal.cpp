#include "Meal.h"
#include <iostream>
#include <cstring>

using namespace std;

Meal::Meal() {
	meal = 0;
	strcpy_s(Description," ");
	price = 0;
};

Meal::Meal(int m,const char d[], double p) {
	meal = m;
	strcpy_s(Description, d);
	price = p;

};
void Meal::setDetails(int no,const char pDesc[]) {
	meal = no;
	strcpy_s(Description, pDesc);
};
void Meal::setPrice(double pPrice) {
	price = pPrice;
};
double Meal::getPrice() {
	return price;
};
Meal::~Meal() {
	cout << "The end" << endl;
};