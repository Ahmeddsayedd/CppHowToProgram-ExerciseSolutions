// 2.24

// (Odd or Even)
// Write a program that reads an integer and determines and prints whether it’s odd or even.
// [Hint: Use the modulus operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]


#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is even." << "\n";
    }
    if (num%2!=0) {
        cout << num<< " is odd." << "\n";
    }

    return 0;
}
