// 2.25

// (Multiples)
// Write a program that reads in two integers and determines and prints if the first is a multiple of the second. [Hint: Use the modulus operator.]


#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Enter two integers separated by a space (DO NOT ENTER 0): ";
    cin >> num1 >> num2;

    if (num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << "." << "\n";
    } else {
        cout << num1 << " is not a multiple of " << num2 << "." << "\n";
    }

    return 0;
}

