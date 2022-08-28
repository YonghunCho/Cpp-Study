/* A test driver for Dynamic Allocation (TestDynamicAllocation.cpp) */
#include "Point.h"
#include <iostream>
using namespace std;

int main() {
    // Object Pointers with dynamic allocation
    Point* ptrP1;
    ptrP1 = new Point(); // Dynamically allocate storage via new
    // with default constructor
    ptrP1->print();      // Point @ (0,0)
    cout << endl;

    Point* ptrP2 = new Point(2, 2);  // with constructor
    ptrP2->print();  // Point @ (0,0)
    cout << endl;

    delete ptrP1;    // Remove storage via delete
    delete ptrP2;

    // Array of Dynamic Objects
    Point* ptrPtsArray = new Point[2];
    ptrPtsArray[1].setXY(31, 31);
    ptrPtsArray[1].print();  // Point @ (31,31)
    cout << endl;
    delete[] ptrPtsArray;    // Free storage for entire array
}