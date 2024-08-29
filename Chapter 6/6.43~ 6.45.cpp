
// 6.43

// Solution:


// The main issue with the program is that it recursively calls main() from within itself.
// This approach can lead to stack overflow if the input is large or if the end-of-file (EOF) is not reached.
// Additionally, characters are printed in reverse order because the cout statement is executed after the recursive call completes.

// To fix this, use a loop instead of recursion. This way, you avoid stack overflow and print characters in the correct order.


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 6.44

// Solution:

// This program calculates and displays the product of two numbers, a and b, which is the result of a multiplied by b.


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


// 6.45

// Program Modification Solution:


#include <iostream>
using namespace std;

int mystery(int, int);

int main()
{
    int x = 0, y = 0;

    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "The result is " << mystery(x, y) << endl;

    return 0;
}

int mystery(int a, int b)
{
    // Base case: when b is 1 return a
    if (1 == b)
        return a;
    // Base case: when b is -1, return -a to correctly handle multiplication with a negative b
    else if (-1 == b)
        return -a;
    // Special case when b is zero
    else if (b == 0)
        return 0;
    // Recursive step for positive b
    else if (b > 0)
        return a + mystery(a, b - 1);
    // Recursive step for negative b
    else
        return -a + mystery(a, b + 1);
}

