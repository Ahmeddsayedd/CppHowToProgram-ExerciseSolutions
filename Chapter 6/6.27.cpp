
// 6.27 (Find the Minimum)

// Solution:

#include <iostream>
using namespace std;

double Smallest(double num1, double num2, double num3);

int main()
{
    double n1, n2, n3;
    cout << "Enter three floating point numbers separated by a space: ";
    cin >> n1 >> n2 >> n3;

    cout << "The smallest number is: " << Smallest(n1, n2, n3) << endl;

    return 0;
}

double Smallest(double num1, double num2, double num3)
{
    double smallest = num1;

    if (num2 < smallest)
        smallest = num2;

    if (num3 < smallest)
        smallest = num3;

    return smallest;
}


// NOTES:
    // We avoid using 'else if' here because each comparison is independent.
    // 'else if' would only check the next condition if the first condition fails.
    // However, we need to check both num2 and num3 regardless of the previous comparisons,
    // as either of them could be smaller than 'smallest' even if one condition passes.
