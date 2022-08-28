/* Test const overloading function (TestConstFn.cpp) */
#include <iostream>
#include <string>
using namespace std;

int main() {
	const string s1("Apple");  // const object
	string s2("Banana");       // non-const object

	cout << s1.at(3) << endl;  // run const version, non-mutable
	s2.at(0) = 'A';            // run non-const version, mutable
	cout << s2 << endl;

	// s1.at(0) = 'B';  // error: assignment of read-only location
}