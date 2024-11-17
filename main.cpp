#include <iostream>
#include <cassert>
#include <valarray>
#include "Point.h"

using namespace std;

int main(){
    Point p1(0, 1);
    Point p2(3, 5);

    assert(!(p1 == p2));
    assert(p1 != p2);

    Point p3(0,1);

    assert(p3 == p1 && p3 != p2);

    assert(p3 - p1 == 0);

    Point p4(8,10);

    assert(p4 - p3 == sqrt(145));

    assert((p2 / p1).getX() == 1.5 && (p2 / p1).getY() == 3);

    cout << "Tests completed" << endl;
    return 0;
}