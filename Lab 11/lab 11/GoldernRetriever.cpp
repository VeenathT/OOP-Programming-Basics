#include "GoldernRetriever.h"
#include <iostream>

GoldernRetriever::GoldernRetriever() {
	name = "";
	gender = "";
	age = 0;
	weight = 0;
	height = 0;
	originatedCountry = "";
	type = "";
	lifeSpan = 0.00;
};
GoldernRetriever::GoldernRetriever(string pname, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan) {
	name = pname;
	gender = pgender;
	age = page;
	weight = pweight;
	height = pheight;
	originatedCountry = poriginatedCountry;
	type = ptype;
	lifeSpan = plifeSpan;
};
void GoldernRetriever::setName(string pname) {
	name = pname;
};
string GoldernRetriever::getName() {
	return name;
};
double GoldernRetriever::calcWeeklyFoodCost() {
	if (weight < 3) {
		return 3 * 7 * 100;
	}
	else if (weight <= 3 && weight >= 6) {
		return 4 * 7 * 100;
	}
	else if (weight > 6) {
		return 5 * 7 * 100;
	}
};
GoldernRetriever::~GoldernRetriever() {
	cout << "End GoldernRetriever" << endl;
};