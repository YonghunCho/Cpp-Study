/* Testing constant objects and constant member functions
   (TestConstantObject.cpp) */
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x = 0, int y = 0) : x(x), y(y) { }
	int getX() const { return x; }  // const function (cannot modify data)
	int getY() const { return y; }  // const function
	void setX(int x) { this->x = x; }  // non-const function
	void setY(int y) { this->y = y; }  // non-const function
	void print() const { cout << "(" << x << "," << y << ")" << endl; }  // const
};

int main() {
	// non-const object can invoke const and non-const member functions
	Point p1(5, 6);        // non-const object
	p1.setX(55);
	p1.print();   // (55,6)

	// const object can only invoke const member functions
	const Point p2(7, 8);  // const object
	p2.print();   // (7,8)
	// p2.setX(55);  // error: const object cannot invoke non-const member function
}