/* Test typeid operator, which return an object of type_info (TestTypeID.cpp) */
#include <iostream>
#include <typeinfo>       // Need for typeid operator
#include "MovablePoint.h" // included "Point.h"
using namespace std;

int main() {
	// Object Pointer
	Point* ptrP1 = new MovablePoint(11, 12, 13, 14);  // upcast
	cout << typeid(*ptrP1).name() << endl;   // 12MovablePoint

	MovablePoint* ptrMP1 = dynamic_cast<MovablePoint*>(ptrP1);
	cout << typeid(*ptrMP1).name() << endl;  // 12MovablePoint
	delete ptrP1;

	Point p2;
	cout << typeid(p2).name() << endl;  // 5Point

	MovablePoint mp2(1, 2, 3, 4);
	cout << typeid(mp2).name() << endl; // 12MovablePoint
}