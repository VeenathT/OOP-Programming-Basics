#include "Puppy.h"
#include <iostream>

using namespace std;

Puppy::Puppy() {
	gender = "";
	age = 0;
	weight = 0;
	height = 0;
	originatedCountry = "";
	type = "";
	lifeSpan = 0.00;
};
Puppy::Puppy(string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan) {
	gender = pgender;
	age = page;
	weight = pweight;
	height = pheight;
	originatedCountry = poriginatedCountry;
	type = ptype;
	lifeSpan = plifeSpan;
};
void Puppy::setGender(string pgender) {
	gender = pgender;
};
void Puppy::setAge(int page) {
	age = page;
};
void Puppy::setWeight(int pweight) {
	weight = pweight;
};
void Puppy::setHeight(int pheight) {
	height = pheight;
};
void Puppy::setOriginatedCountry(string poriginatedCountry) {
	originatedCountry = poriginatedCountry;
};
void Puppy::setType(string ptype) {
	type = ptype;
};
void Puppy::setLifeSpan(double plifeSpan) {
	lifeSpan = plifeSpan;
};
string Puppy::getGender() {
	return gender;
};
int Puppy::getAge() {
	return age;
};
int Puppy::getHeight() {
	return height;
};
string Puppy::getOriginatedCountry() {
	return originatedCountry;
};
string Puppy::getType() {
	return type;
};
double Puppy::getLifeSpan() {
	return lifeSpan;
};
Puppy::~Puppy() {
	cout << "End puppy" << endl;
};
