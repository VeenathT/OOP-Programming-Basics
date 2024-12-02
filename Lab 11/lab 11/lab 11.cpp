#include <iostream>
#include <iomanip>
#include "Bulldog.h"
#include "GermanShepard.h"
#include "GoldernRetriever.h"
#include "ShinhTzu.h"

using namespace std;

int main()
{
    double gs_total = 0;
    double b_total = 0;
    double gr_total = 0;
    double s_total = 0;
    double wCost = 0;

    GermanShepard gs1("GA", "male", 3, 5, 25, " ", " ", 0);
    GermanShepard gs2("GA", "female", 5, 8, 38, " ", " ", 0);    
    Bulldog b1("William George", "male", 1, 2, 10, " ", " ", 0);
    GoldernRetriever gr1("Toby", "male", 2, 2, 18, " ", " ", 0);
    GoldernRetriever gr2("Timmy", "male", 3, 3, 22, " ", " ", 0);
    GoldernRetriever gr3("Shina", "female", 2, 4, 20, " ", " ", 0);
    GoldernRetriever gr4("Shiba", "female", 3, 5, 21, " ", " ", 0);
    ShinhTzu s1("China", "male", 2, 5, 19, " ", " ", 0);
    ShinhTzu s2("Malaysia", "female", 1, 1, 12, " ", " ", 0);

    gs_total = gs1.calcWeeklyFoodCost() + gs2.calcWeeklyFoodCost();
    b_total = b1.calcWeeklyFoodCost();
    gr_total = gr1.calcWeeklyFoodCost() + gr2.calcWeeklyFoodCost() + gr3.calcWeeklyFoodCost() + gr4.calcWeeklyFoodCost();
    s_total = s1.calcWeeklyFoodCost() + s2.calcWeeklyFoodCost();
    

    wCost = gs_total + b_total + gr_total + s_total;

    cout << "Weekly Total Cost : " << setprecision(5) << ios::fixed << wCost << endl;

    return 0;
}
