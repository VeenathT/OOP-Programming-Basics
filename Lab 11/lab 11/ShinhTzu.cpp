#include "ShinhTzu.h"
#include <iostream>

ShinhTzu::ShinhTzu() {
	country = "";
	gender = "";
	age = 0;
	weight = 0;
	height = 0;
	originatedCountry = "";
	type = "";
	lifeSpan = 0.00;
};
ShinhTzu::ShinhTzu(string pcountry, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan) {
	country = pcountry;
	gender = pgender;
	age = page;
	weight = pweight;
	height = pheight;
	originatedCountry = poriginatedCountry;
	type = ptype;
	lifeSpan = plifeSpan;
};
void ShinhTzu::setCountry(string pcountry) {
	country = pcountry;
};
string ShinhTzu::getCountry() {
	return country;
};
double ShinhTzu::calcWeeklyFoodCost() {
	if (weight < 2) {
		return 2 * 7 * 100;
	}
	else if (weight <= 2 && weight >= 4) {
		return 3 * 7 * 100;
	}
	else if (weight > 4) {
		return 4 * 7 * 100;
	}
};
ShinhTzu::~ShinhTzu() {
	cout << "End ShinhTzu" << endl;
};