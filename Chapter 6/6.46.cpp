
// 6.46 (Math Library Functions)

// Solution:


#include <iostream>
#include <cmath> // For math functions
#include <iomanip>

using namespace std;

int main() {
    // Printing headers for better readability
    cout << "Testing math library functions\n";
    cout << "Value\tSqrt\tPow\tExp\tLog\tLog10\tSin\tCos\tTan\tAbs\tFloor\tMod\n";

    // Loop through a range of values to test the math functions
    for (double value = 0.1; value <= 2.0; value += 0.1) {
        double sqrtValue = sqrt(value);
        double powValue = pow(value, 2); // example: x^2
        double expValue = exp(value);
        double logValue = (value > 0) ? log(value) : NAN; // log only for positive values, NAN stands for "Not-a-Number." It is a constant defined in the <cmath> header.
        double log10Value = (value > 0) ? log10(value) : NAN; // log10 only for positive values
        double sinValue = sin(value);
        double cosValue = cos(value);
        double tanValue = tan(value);
        double absValue = fabs(value - 1.5); // example: |value - 1.5|
        double floorValue = floor(value);
        double fmodValue = fmod(value, 1.0); // example: value % 1.0

        cout << fixed << setprecision (3);
        // Print results in a tabular format
        cout << value << "\t"
             << sqrtValue << "\t"
             << powValue << "\t"
             << expValue << "\t"
             << logValue << "\t"
             << log10Value << "\t"
             << sinValue << "\t"
             << cosValue << "\t"
             << tanValue << "\t"
             << absValue << "\t"
             << floorValue << "\t"
             << fmodValue << "\n";
    }

    return 0;
}
