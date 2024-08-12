// 2.18

// (Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words "is larger."
// If the numbers are equal, print the message "These numbers are equal."

#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Enter two integers separated by a space: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << num1 << " is larger." << endl;
    } else if (num2 > num1) {
        cout << num2 << " is larger." << endl;
    } else {
        cout << "These numbers are equal." << endl;
    }

    return 0;
}
