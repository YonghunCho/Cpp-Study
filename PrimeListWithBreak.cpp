/*
 *  List primes from 1 to an upperbound (PrimeListWithBreak.cpp).
 */
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int upperbound;
    cout << "Enter the upperbound: ";
    cin >> upperbound;
    for (int number = 2; number <= upperbound; ++number) {
        // Not a prime, if there is a factor between 2 and sqrt(number)
        int maxFactor = (int)sqrt(number);
        bool isPrime = true;  // boolean flag to indicate whether number is a prime
        for (int factor = 2; factor <= maxFactor; ++factor) {
            if (number % factor == 0) {   // Factor?
                isPrime = false;   // number is not a prime
                break;   // A factor found, no need to search for more factors
            }
        }
        if (isPrime) cout << number << " ";
    }
    cout << endl;
    return 0;
}