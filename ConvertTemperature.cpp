/*
 * Converting between Celsius and Fahrenheit (ConvertTemperature.cpp)
 *   Celsius = (5/9)(Fahrenheit–32)
 *   Fahrenheit = (9/5)Celsius+32
 */
#include <iostream>
#include <iomanip>   // needed for formatting floating-point numbers
using namespace std;

int main() {
	double celsius, fahrenheit;

	// Format floating-points in fixed with 2 decimal places
	cout << fixed << setprecision(2);

	cout << "Enter the temperature in celsius: ";
	cin >> celsius;
	fahrenheit = celsius * 9 / 5 + 32;
	// 9/5*celsius + 32 gives wrong answer! Why?
	cout << celsius << "C is " << fahrenheit << "F" << endl;

	cout << "Enter the temperature in fahrenheit: ";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	// 5/9*(fahrenheit - 32) gives wrong answer! Why?
	cout << fahrenheit << "F is " << celsius << "C" << endl;
	return 0;
}