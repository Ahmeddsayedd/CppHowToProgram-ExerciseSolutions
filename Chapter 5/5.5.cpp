// (Summing Integers)
// Write a program that uses a for statement to sum a sequence of integers. Assume that the first integer read specifies the number
// of values remaining to be entered. Your program should read only one value per input statement. A typical input sequence might be
// 5 100 200 300 400 500


// Answer:

#include <iostream>
using namespace std;

int main() {
    int num, value, sum = 0;

    // The first input specifies the number of subsequent values to be read and is included in the sum.
    cout << "Enter the number of values to be summed: ";
    cin >> num;
    sum = num;

    for (int i = 0; i < num; ++i) {
        cout << "Enter number: ";
        cin >> value;
        sum += value;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}
