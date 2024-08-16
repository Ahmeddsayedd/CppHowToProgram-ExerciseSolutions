// (Averaging Integers)
// Write a program that uses a for statement to calculate the average of several integers.
// Assume the last value read is the sentinel 9999. For example, the sequence 10 8117 99999 indicates that
// the program should calculate the average of all the values preceding 9999.


// Answer:

#include <iostream>
using namespace std;

int main() {
    int value, sum = 0, count = 0, SENTINEL = 9999;

    cout << "Enter integers (enter 9999 to stop):" << endl;

    for (;;) { // Infinite loop, will break when sentinel is entered
        cin >> value;

        if (value == SENTINEL) {
            break; // Exit loop if sentinel value is entered
        }

        sum += value;
        count++;
    }

    if (count != 0) { // Check to avoid division by zero
        double average = static_cast<double>(sum) / count;
        cout << "The average is: " << average << endl;
    } else {
        cout << "No numbers were entered." << endl;
    }

    return 0;
}
