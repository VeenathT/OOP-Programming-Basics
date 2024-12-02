#include <iostream>
#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    Employee emp1;
    
    char name[] = "Wimal";

   // emp1.assignDetails(10, name, 50000);
    emp1.inputdetails();
    emp1.setAllowance();
    emp1.setOTDetails();
    emp1.calcSal();

    emp1.printPaySlip();

    return 0;
}
