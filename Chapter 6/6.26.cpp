
// 6.26 (Celsius and Fahrenheit Temperatures)

// Solution:

#include <iostream>
#include <iomanip>
using namespace std;

double Celsius(int F);
double Fahrenheit(int C);

int main()
{
    cout << "Celsius" << setw(26) << "Fahrenheit equivalent" << endl;
    for (int i = 0; i <= 100; i++)
    {
        cout << setw(7) << i << setw(26) << Fahrenheit(i) << endl;
    }

    cout << "\n\n\n\n\n";

    cout << "Fahrenheit" << setw(26) << "Celsius equivalent" << endl;
    for (int i = 32; i <= 212; i++)
    {
        cout << setw(10) << i << setw(26) << Celsius(i) << endl;
    }

    return 0;
}

double Celsius(int F)
{
    return (5.0 / 9) * (F - 32);  // Ensure correct floating-point division
}

double Fahrenheit(int C)
{
    return (9.0 / 5) * C + 32;  // Ensure correct floating-point division
}


// NOTES:
    // The division 5.0 / 9 and 9.0 / 5 uses implicit casting to ensure floating-point division,
    // which gives the correct value for the tempreture conversion. Without the .0,
    // the division would result in integer division, leading to incorrect results.
