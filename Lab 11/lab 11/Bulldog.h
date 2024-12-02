#pragma once
#include <string>
#include "Puppy.h"

using namespace std;

class Bulldog : public Puppy
{
private:
	string owner;

public:
	Bulldog();
	Bulldog(string powner, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan);
	void setOwner(string powner);
	string getOwner();
	double calcWeeklyFoodCost();
	~Bulldog();
};

