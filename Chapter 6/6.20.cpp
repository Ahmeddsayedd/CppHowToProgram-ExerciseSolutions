
// 6.20 (Multiples)

// Solution:

#include <iostream>
using namespace std;

bool multiple(int num1, int num2);

int main()
{
    int num1, num2;

    cout << "Enter two numbers separated by a space (-9999 in both numbers to exit): ";
    cin >> num1 >> num2;

    while (num1 != -9999 && num2 != -9999)
    {
        if (multiple(num1, num2))
            cout << num2 << " is a multiple of " << num1 << endl;
        else
            cout << num2 << " is NOT a multiple of " << num1 << endl;

        cout << "Enter two numbers separated by a space (-9999 in both numbers to exit): ";
        cin >> num1 >> num2;
    }

    return 0;
}

bool multiple(int num1, int num2)
{
    // This expression evaluates to true if num2 is a multiple of num1 (i.e., the remainder is 0),
    // and false otherwise.
    return num2 % num1 == 0;
}
