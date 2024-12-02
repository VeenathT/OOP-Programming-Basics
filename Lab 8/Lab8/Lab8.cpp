#include <iostream>
#include "Item.h"
#include "SalesPerson.h"

using namespace std;

int main()
{
    //static way
   /* SalesPerson s1(1000, "Wimal");

    Item item1(1001, "Shampoo");
    Item item2(2002, "Conditioner");

    item1.setPrice(550);
    item2.setPrice(620);

    s1.calcSales(item1, item2);
    s1.printSales();*/

    //dynamic Way
    SalesPerson* s1;
    s1 = new SalesPerson(1000, "Wimal");

    Item* item1;
    item1 = new Item(1001, "Shampoo");

    Item* item2;
    item2 = new Item(2002, "Condition");

    item1->calcSales(*item1, *item2);
    s1->printSales();

}


