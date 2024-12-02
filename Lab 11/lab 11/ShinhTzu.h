#pragma once
#include <string>
#include "Puppy.h"

using namespace std;

class ShinhTzu : public Puppy
{
private:
	string country;

public:
	ShinhTzu();
	ShinhTzu(string pcountry, string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan);
	void setCountry(string pcountry);
	string getCountry();
	double calcWeeklyFoodCost();
	~ShinhTzu();
};

