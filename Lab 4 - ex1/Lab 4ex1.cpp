#include <iostream>
#include "shapeArea.h"

using namespace std;

struct Circle
{
    float radius;
};

struct Rectangle {
    float length, width;
};

struct Square
{
    float width;
};


int main()
{
    //create structure variables and input

    Circle c1;
    c1.radius = 5;

    Rectangle r1, r2;

    r1.width = 3;
    r1.length = 7;

    r2.length = 28;
    r2.width = 15;

    Square s;

    s.width = 4;


    //calculate the area

    float cArea = areaCircle(c1.radius);
    float r1Area = areaRectangle(r1.width, r1.length);
    float r2Area = areaRectangle(r2.width, r2.length);
    float sqArea = areaSquare(s.width);
    float greenArea = r2Area - (r1Area + cArea + sqArea);

    //print the results
    cout << "Area of Grass is " << greenArea << endl;

    return 0;
}