/*
Testing type cast 
*/

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	double average;

	int number = 1;

	while (number <= 100) {
		sum = sum + number;
		++number;
	}
	cout << "The sum is " << sum << endl;

	average = sum / 100;
	cout << "Average 1 is " << average << endl;
	average = double(sum) / 100;
	cout << "Average 2 is " << average << endl;
	
	return 0;
}
