#pragma once

#include <string>

using namespace std;

class Puppy
{
	protected:
		string gender;
		int age;
		int weight;
		int height;
		string originatedCountry;
		string type;
		double lifeSpan;
	public:
		Puppy();
		Puppy(string pgender, int page, int pweight, int pheight, string poriginatedCountry, string ptype, double plifeSpan);
		void setGender(string pgender);
		void setAge(int page);
		void setWeight(int pweight);
		void setHeight(int pheight);
		void setOriginatedCountry(string poriginatedCountry);
		void setType(string ptype);
		void setLifeSpan(double plifeSpan);
		string getGender();
		int getAge();
		int getHeight();
		string getOriginatedCountry();
		string getType();
		double getLifeSpan();
		~Puppy();

};

