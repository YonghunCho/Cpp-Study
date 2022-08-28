/* Test Driver for the Time class (TestTime.cpp) */
#include <iostream>
#include <stdexcept>  // Needed for exception handling
#include "Time.h"
using namespace std;

int main() {
    //   Time t2(25, 0, 0); // program terminates abruptly
    //   t2.print();        // The rest of program will not be run

    // Graceful handling of exception
    try {
        Time t1(25, 0, 0); // Skip the remaining statements in try-clause and
        // jump to catch-clause if an exception is thrown
        t1.print();
        // Continue to the next statement after try-catch, if there is no exception
    }
    catch (invalid_argument& ex) {  // need <stdexcept>
        cout << "Exception: " << ex.what() << endl;
        // Continue to the next statement after try-catch
    }
    cout << "Next statement after try-catch" << endl;
}