
// 6.24 (Separating Digits)

// Solution:

#include <iostream>
using namespace std;

void SeparatingDigits(int num);

int main()
{
    int num1, num2, number;

    cout << "Enter two numbers separated by a space: ";
    cin >> num1 >> num2;

    // a)
    cout << "The integer part of the quotient " << num1 << " divided by " << num2 << " is: " << num1 / num2 << endl;

    // b)
    cout << "The integer remainder of the quotient " << num1 << " divided by " << num2 << " is: " << num1 % num2 << endl;

    // c)
    cout << "Enter an integer between 1 and 32767: ";
    cin >> number;

    if (number < 1 || number > 32767) {
        cout << "Number out of range. Please enter a number between 1 and 32767." << endl;
        return 1;
    }

    SeparatingDigits(number);

    return 0;
}

void SeparatingDigits(int num)
{
    int divisor = 10000;

    // The algorithm first determines the starting divisor based on the magnitude of the number.
    // It then continuously extracts each digit by dividing the number by the current divisor,
    // taking the remainder modulo 10, and then prints the digit followed by two spaces.
    while (num / divisor == 0) {
        divisor /= 10;
    }

    while (divisor != 0)
    {
        int result = (num / divisor) % 10;
        cout << result << "  ";
        divisor /= 10;
    }
}
