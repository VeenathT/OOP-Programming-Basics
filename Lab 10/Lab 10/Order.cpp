#include <iostream>
#include "Order.h"
#include "Meal.h"

using namespace std;

// Constructor of the Order Class
Order::Order(int pID, int size)
{
	orderID = pID;
	maxSize = size;
	meals = new Meal[size];
	count = 0;
};

// addItem() method of “Order” class
// Here the items will be added to the “Meal” array one by one. 

void Order::addItem(int no,const char name[], double pPrice)
{
	if (count < maxSize)
	{
		meals[count].setDetails(no, name);
		meals[count].setPrice(pPrice);
		count++;
	}
	else {
		cout << "Cannot enter anymore items " << endl;
	}
};

double Order::calTotPrice() {
	double total =0;
	for (int i = 0; i < maxSize; i++) {
		total = total + meals[i].getPrice();
	}

	return total;
};
Order::~Order(void) {
	cout << "End order class" << endl;
};