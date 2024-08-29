
// 6.21 (Even Numbers)

// Solution:

#include <iostream>
using namespace std;

bool isEven(int num);

int main()
{
    int num;

    cout << "Enter a number (-9999 to exit): ";
    cin >> num;

    while (num != -9999)
    {
        if (isEven(num))
            cout << num << " is Even" << endl;
        else
            cout << num << " is Odd" << endl;

        cout << "Enter a number (-9999 to exit): ";
        cin >> num;
    }

    return 0;
}

bool isEven(int num)
{
    // The expression `num % 2 == 0` checks if the number is even.
    // If the remainder when dividing num by 2 is 0, the number is even, so the function returns true.
    // If the remainder is not 0, the number is odd, so the function returns false.
    return num % 2 == 0;
}
