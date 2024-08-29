
// 6.13 (Rounding Numbers)

// Solution:

#include <iostream>
#include <iomanip>
#include <cmath> // For the floor function
using namespace std;

int main() {
    double number;  // Variable to store the input number

    cout << "Enter numbers to round (enter -1 to terminate):" << endl;

    while (true) {

        cout << "Enter a number: ";
        cin >> number;

        // Check if the sentinel value -1 is entered to terminate the loop
        if (number == -1) {
            break;
        }

        // This logic correctly rounds numbers by adding 0.5 and applying the floor function.
        // If the original number is between x.1 and x.4, it will round down to x.
        // If the original number is between x.5 and x.9, it will round up to x+1.

        int roundedNumber = floor(number + 0.5);

        cout << "Original number: " << fixed << setprecision(2) << number << endl;
        cout << "Rounded number: " << roundedNumber << endl;
    }

    return 0;
}
