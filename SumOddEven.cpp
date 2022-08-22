/*
+ Sum the odd and even nmbers from 1 to upperbound 
*/

#include <iostream>
using namespace std;

int main() {
	int sumOdd = 0;
	int sumEven = 0;
	int upperbound;

	cout << "Enter the upperbound: ";
	cin >> upperbound;

	int number = 1;
	while (number <= upperbound) {
		if (number % 2 == 0) {
			sumEven = sumEven + number;
		}
		else {
			sumOdd = sumOdd + number;
		}
		++number;
	}
	cout << "The sum of odd numbers is " << sumOdd << endl;
	cout << "The sum of even number is " << sumEven << endl;
	cout << "The difference is " << (sumOdd - sumEven) << endl;

	return 0;
}
