#include "Bulldog.h"
#include <iostream>

Bulldog::Bulldog() {
	owner = "";
	gender = "";
	age = 0;
	weight = 0;
	height = 0;
	originatedCountry = "";
	type = "";
	lifeSpan = 0.00;
};
Bulldog::Bulldog(string powner, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan) {
	owner = powner;
	gender = pgender;
	age = page;
	weight = pweight;
	height = pheight;
	originatedCountry = poriginatedCountry;
	type = ptype;
	lifeSpan = plifeSpan;
};
void Bulldog::setOwner(string powner) {
	owner = powner;
};
string Bulldog::getOwner() {
	return owner;
};
double Bulldog::calcWeeklyFoodCost() {
	if (weight < 3) {
		return 5 * 7 * 100;
	}
	else if (weight <= 3 && weight >= 5) {
		return 7 * 7 * 100;
	}
	else if (weight > 5) {
		return 8 * 7 * 100;
	}
};
Bulldog::~Bulldog() {
	cout << "End Bulldog" << endl;
};