
// 6.30 (Reverse Digits)

// Solution:

#include <iostream>
using namespace std;

int reverseDigits(int num);

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "The reverse number is: " << reverseDigits(number);

    return 0;
}

int reverseDigits(int num)
{
    int reverseNumber = 0, remainder;

    while (num != 0)
    {
        remainder = num % 10; // Get the last digit of num
        reverseNumber = reverseNumber * 10 + remainder; // Append the last digit to reverseNumber
        num /= 10; // Remove the last digit from num
    }

    return reverseNumber;
}
