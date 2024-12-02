#pragma once
#include "Item.h"

class SalesPerson
{
private:
	int empno; 
	char name[20];
	double sales;

public:
	SalesPerson(int empNo, const char pName[]);
//	void setPrice(double pPrice);
	void calcSales(Item i1, Item i2);
	void printSales();
	~SalesPerson();
};

