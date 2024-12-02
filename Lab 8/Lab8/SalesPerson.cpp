#include "SalesPerson.h"
#include "Item.h"
#include <cstring>
#include <iostream>

using namespace std;

SalesPerson::SalesPerson(int empNo,const char pName[]) {
	empno = empNo;
	strcpy_s(name, pName);
};

void SalesPerson::calcSales(Item i1, Item i2) {
	int qty1, qty2;

	cout << "Input Quantity of the item 1 : " ;
	cin >> qty1;
	cout << "Input Quantity of the Item 2 : " ;
	cin >> qty2;

	sales = i1.calcTotal(qty1) + i2.calcTotal(qty2);

};

void SalesPerson::printSales() {
	cout << "Employee No : " << empno << endl;
	cout << "Employee Name : " << name << endl;
	cout << "Sales : " << sales << endl;
};

SalesPerson::~SalesPerson() {
	cout << "Employee No : " << empno << " deleted" << endl;

};