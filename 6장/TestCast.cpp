/* Test Up and Down Cast (TestCast.cpp) */
#include <iostream>
#include "MovablePoint.h"   // included "Point.h"
using namespace std;

int main() {
    // Object Pointer
    Point* ptrP1 = new MovablePoint(11, 12, 13, 14);
    // Upcast is always permissible and safe
    ptrP1->print();

    // MovablePoint * ptrMP1 = ptrP1;  // error
    MovablePoint* ptrMP1 = (MovablePoint*)ptrP1;
    // Downcast requires explicit casting operator
    delete ptrP1;
}