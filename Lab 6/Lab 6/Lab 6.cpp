#include <iostream>
#include "Circle.h"
#include "RectangleX.h"
#include "Square.h"
#include "iomanip"

using namespace std;

int main()
{
    Circle c{};

    c.setRadius(5);
    c.getRadius();

    double cArea = c.calcArea();

    RectangleX rl{}, rb{};

    rl.setLength(18);
    rl.setWidth(10);
    rl.getLength();
    rl.getWidth();

    double rlArea = rl.calcArea();

    rb.setLength(7);
    rb.setWidth(2);
    rb.getLength();
    rb.getWidth();

    double rbArea = rb.calcArea();

    Square s{};
    
    s.setLength(4);
    s.getLength();
    double sArea = s.calcArea();

    double greenArea = rlArea - (rbArea + cArea + sArea);

    cout << "area of land : " << setw(5)<< setiosflags(ios:: fixed) << setprecision(2) << greenArea;










}