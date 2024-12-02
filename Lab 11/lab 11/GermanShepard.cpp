#include "GermanShepard.h"
#include <iostream>

GermanShepard::GermanShepard() {
	cage = "";
	gender = "";
	age = 0;
	weight = 0;
	height = 0;
	originatedCountry = "";
	type = "";
	lifeSpan = 0.00;
};
GermanShepard::GermanShepard(string pcage, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan) {
	cage = pcage;
	gender = pgender;
	age = page;
	weight = pweight;
	height = pheight;
	originatedCountry = poriginatedCountry;
	type = ptype;
	lifeSpan = plifeSpan;
};
void GermanShepard::setCage(string pcage) {
	string cage = pcage;
};
string GermanShepard::getCage() {
	return cage;
};
double GermanShepard::calcWeeklyFoodCost() {
	if (weight < 4) {
		return 4 * 7 * 100;
	}
	else if (weight <= 4 && weight >= 7) {
		return 5 * 7 * 100;
	}
	else if (weight > 7) {
		return 6 * 7 * 100;
	}
};
GermanShepard::~GermanShepard() {
	cout << "End GermanShepard" << endl;
};