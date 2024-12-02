#pragma once
class Distance
{
private:
	int feet;
	float inches;

public:
	//default constructor
	Distance();

	//parameterized constructor
	Distance(int ft, float in);
	void inputDistance();
	void printDistance();
	void addDistance(Distance d2, Distance d3);
	
	//destructor
	~Distance();
};

