/* Testing Primitive Types (TestLiteral.cpp) */
#include <iostream>
using namespace std;

int main() {
	char gender = 'm';             // char is single-quoted
	bool isMarried = true;         // true(non-zero) or false(0)
	unsigned short numChildren = 8; // [0, 255]
	short yearOfBirth = 1945;      // [-32767, 32768]
	unsigned int salary = 88000;   // [0, 4294967295]
	double weight = 88.88;       // With fractional part
	float gpa = 3.88f;           // Need suffix 'f' for float

	// "cout <<" can be used to print value of any type
	cout << "Gender is " << gender << endl;
	cout << "Is married is " << isMarried << endl;
	cout << "Number of children is " << numChildren << endl;
	cout << "Year of birth is " << yearOfBirth << endl;
	cout << "Salary is " << salary << endl;
	cout << "Weight is " << weight << endl;
	cout << "GPA is " << gpa << endl;
	return 0;
}