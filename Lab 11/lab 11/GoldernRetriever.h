#pragma once
#include <string>
#include "Puppy.h"

using namespace std;

class GoldernRetriever : public Puppy
{
private:
	string name;

public:
	GoldernRetriever();
	GoldernRetriever(string pname, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan);
	void setName(string powner);
	string getName();
	double calcWeeklyFoodCost();
	~GoldernRetriever();
};

