/*
Prompt user for positive integers and display the ocunt,maximum,
minimum and average. Terminate the input with -1 (StatNumbers.cpp)
*/

#include <iostream>
#include <climits> // for INT_MAX
#include <iomanip> // for setprecision(n)
using namespace std;

int main() {

	int numberIn;
	int count = 0;
	int sum = 0;
	int max = 0;
	int min = INT_MAX;
	int sentinel = -1;

	// Read Inputs until sentinel encountered
	cout << "Enter a positive integer of " << sentinel << " to exit: ";
	while (cin >> numberIn && numberIn != sentinel) {
		// check input for positive integer
		if (numberIn > 0) {
			++count;
			sum += numberIn;
			if (max < numberIn) max = numberIn;
			if (min > numberIn) min = numberIn;
		}
		else {
			cout << "error: input must be positive! try again... " << endl;
		}
		cout << "Enter a positive integer or " << sentinel << "to exit:  ";
	}

	//print result
	cout << endl;
	cout << "Count is " << count << endl;
	if (count > 0) {
		cout << "Maximum is " << max << endl;
		cout << "Minimum is " << min << endl;
		cout << fixed << setprecision(2);

		//print floating point to 2 decimal places (need <iomanip>)
		cout << "Average is " << (double)sum / count << endl;

	}
}
