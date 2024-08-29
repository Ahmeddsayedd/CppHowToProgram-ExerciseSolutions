
// 6.14 (Rounding Numbers)

// Solution:

#include <iostream>
#include <iomanip>
#include <cmath> // For the floor function
using namespace std;

    int roundToInteger( double number );
    double roundToTenths( double number );
    double roundToHundredths( double number );
    double roundToThousandths( double number );

int main() {
    double number;

    cout << "Enter numbers to round (enter -1 to terminate):" << endl;

    while (true) {

        cout << "Enter a number: ";
        cin >> number;

        // Check if the sentinel value -1 is entered to terminate the loop
        if (number == -1) {
            break;
        }

        // To test the program, enter a number like 7.2564 when prompted.
        // The program will then display the original number along with its rounded values to the nearest integer, tenth, hundredth, and thousandth.

        cout << "Original Number: " << number << endl;
        cout << "Rounded to integer: " << roundToInteger(number) << endl;
        cout << "Rounded to tenth: " << fixed << setprecision(1) << roundToTenths(number) << endl;
        cout << "Rounded to hundredths: " << fixed << setprecision(2) << roundToHundredths(number) << endl;
        cout << "Rounded to thousandths: " << fixed << setprecision(3) << roundToThousandths(number) << endl;

    }

    return 0;
}

int roundToInteger (double number)
{
    return floor( number + 0.5 );
}

double roundToTenths (double number)
{
    return floor (number*10+0.5)/10;
}

double roundToHundredths (double number)
{
    return floor (number*100+0.5)/100;
}

double roundToThousandths (double number)
{
    return floor (number*1000+0.5)/1000;
}
