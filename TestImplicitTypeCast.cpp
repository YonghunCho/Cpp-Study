/*
 * Test implicit type casting (TestImplicitTypeCast.cpp)
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i;
	double d;

	// print floating point number in fixed format with 1 decimal place
	cout << fixed << setprecision(2);

	i = 3;
	d = i;    // Assign an int value to double
	cout << "d = " << d << endl;  // 3.0

	d = 5.5;
	i = d;    // Assign a double value to int
	cout << "i = " << i << endl;  // 5 (truncated, no warning!)

	i = 6.6;  // Assign a double literal to int
	cout << "i = " << i << endl;  // 6 (truncated, no warning!)
}