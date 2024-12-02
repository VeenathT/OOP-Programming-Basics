#include <iostream>
#include "Order.h"

using namespace std;

int main()
{
    double totalPrice;

    Order order1(100, 3);
    order1.addItem(102, "Burger", 550);
    order1.addItem(114, "Sandwitch", 390);
    order1.addItem(215, "Fish & Chips", 450);

    totalPrice = order1.calTotPrice();

    cout << "The total price of this order :  " << totalPrice;



    char ch;
    cin >> ch;




    return 0;
}