/*
 * Testing Explicit Type Cast (Average1to100.cpp).
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int sum = 0;
    double average;
    for (int number = 1; number <= 100; ++number) {
        sum += number;      // Final sum is int 5050
    }
    average = sum / 100;   // Won't work (average = 50.0 instead of 50.5)
    cout << fixed << setprecision(1);
    cout << "Average is " << average << endl;  // Average is 50.0
    return 0;
}