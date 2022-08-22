/*
List non-prime from 1 to an upperbound (NonPrimeList.cpp)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int upperbound;
	cout << "Enter the upperbound: ";
	cin >> upperbound;
	for (int number = 2; number <= upperbound; ++number) {

		//Not a prime, if there is a factor between 2 and sqrt(number)
		int maxFactor = (int)sqrt(number);
		for (int factor = 2; factor <= maxFactor; ++factor) {
			if (number % factor == 0) {
				cout << number << " ";
				break;
			}
		}
	}
}