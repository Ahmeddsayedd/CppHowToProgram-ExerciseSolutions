// (Find the Two Largest Numbers)
// Using an approach similar to that in Exercise 4.17, find the two largest values among the 10 numbers.
// [Note: You must input each number only once.]


// Answer:
#include <iostream>
using namespace std;

int main() {
    int counter = 1, num, largest1, largest2;

    // Input the first number and initialize largest1 with it
    cout << "Enter number: ";
    cin >> num;
    largest1 = num; // Initialize largest1 with the first input number. This is crucial because
                    // we need a valid starting point for comparison. Without this initialization,
                    // we wouldn't have a reference to compare subsequent numbers, which would lead
                    // to incorrect or undefined results.

    // Input the second number to initialize largest2
    cout << "Enter number: ";
    cin >> num;

    if (num > largest1) {
        // If the second number is larger than the first, update largest1 and largest2
        largest2 = largest1; // The previous largest number (largest1) becomes the second largest
        largest1 = num;      // The new number is now the largest
    } else {
        // If the second number is not larger than the first, it becomes the second largest
        largest2 = num;
    }

    // Process the remaining 8 numbers
    while (counter <= 8) {
        cout << "Enter number: ";
        cin >> num;

        if (num > largest1) {
            // Update largest1 and largest2 when a new number is larger than the current largest
            largest2 = largest1; // The previous largest number becomes the second largest
            largest1 = num;      // The new number is now the largest
        } else if (num > largest2) {
            // Update largest2 if the new number is larger than the current second largest
            largest2 = num;
        }
        counter++;
    }

    cout << "The largest two numbers are: " << largest1 << " and " << largest2 << endl;

    return 0;
}
