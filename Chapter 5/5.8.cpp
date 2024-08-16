// (Find the Smallest Integer) Write a program that uses a for statement to find the smallest
// of several integers. Assume that the first value read specifies the number of values remaining.


// Answer:

#include <iostream>
using namespace std;

int main() {
    int num, smallest, counterMAX;

    cout << "Enter a number: ";
    cin >> num;

    // Initialize smallest and counterMAX with the first number
    smallest = counterMAX = num;

    // Loop to read remaining numbers
    for (unsigned int counter = 1; counter <= counterMAX - 1; ++counter) {
        cout << "Enter a number: ";
        cin >> num;

        // Update smallest if current number is smaller
        if (smallest > num) {
            smallest = num;
        }
    }

    // Output the smallest integer
    cout << "The smallest integer is: " << smallest << endl;

    return 0;
}


// NOTES:

// We use the variable 'counterMAX' to store the initial number of inputs to process.
// If we used 'num' for this purpose, it would change with every iteration, as 'num' is updated
// with each new input value. This would lead to incorrect loop behavior, as 'num' would not
// reliably indicate the total number of inputs remaining, potentially causing an infinite loop
// or undefined behavior. By using 'counterMAX', we keep track of the total number of values to
// process without altering this count during the iterations.


