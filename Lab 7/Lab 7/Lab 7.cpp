#include <iostream>
#include "Distance.h"

using namespace std;

int main()
{
    ////excersiz 01
    ////default
    //Distance d1;
    //d1.printDistance();
    //
    ////overloaded
    //Distance d2(11,6.25);
    //d2.printDistance();


    //excersize 02
    //dynamic objects

    /*Distance* dist1 = new Distance();

    dist1->printDistance();

    Distance* dist2 = new Distance();

    dist2->printDistance();

    delete dist1;
    delete dist2;
*/

    //Excersize 03

    Distance dist1, dist3;
    Distance dist2(11, 6.25);

    dist1.inputDistance();
    dist3.addDistance(dist1, dist2);

    dist3.printDistance();

}
