// rugfit2.cpp - calculates fit of rug to a floor
// YOUR NAME(S), TODAY'S DATE

#include <iostream>
using namespace std;

#include "Rectangle.h"

int main() {
    
    double width, length;
    Rectangle rug(0,0); // will be updated below

    // create Rectangle named "floor" for sizes input by user
    cout << "enter width and length of floor: ";
    cin >> width >> length;
    const Rectangle floor (width, length); // note: const object
    cout << "enter width and length of rug: ";
    double width2, length2;
    cin >> width2 >> length2;

    // RESET Rectangle NAMED "rug" FOR SIZES INPUT BY USER
    // (instead of the (0,0) used when it was created.
    rug.setLength(length2);
    rug.setWidth(width2);

    // Change the two assignment statements for floorArea and rugArea
    // to use the area method for each of the floor and rug objects.
    double floorArea = floor.area();
    double rugArea = rug.area();

    // DO NOT CHANGE ANYTHING BELOW (if you do, you are subject to
    // deductions, or getting a zero on the lab.))

    // print results
    cout << "floor area: " << floorArea << endl;
    cout << "rug area: " << rugArea << endl;
    double leftover = rugArea - floorArea;
    cout << "leftover rug area: " <<
        (leftover > 0 ? leftover : 0) << endl;
    cout << "empty floor area: " <<
        (leftover < 0 ? -leftover : 0) << endl;

    return 0;
}
