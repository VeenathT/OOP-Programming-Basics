#pragma once
#include <string>
#include "Puppy.h"

using namespace std;

class GermanShepard : public Puppy
{
	private:
		string cage;

	public:
		GermanShepard();
		GermanShepard(string pcage, string pgender, int page, int pweight,int pheight, string poriginatedCountry, string ptype, double plifeSpan);
		void setCage(string pcage);
		string getCage();
		double calcWeeklyFoodCost();
		~GermanShepard();
	
};

