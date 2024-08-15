// (Gas Mileage)
// Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several trips
// by recording miles driven and gallons used for each trip. Develop a C++ program that uses a while statement to
// input the miles driven and gallons used for each trip. The program should calculate and display the miles per
// gallon obtained for each trip and print the combined miles per gallon obtained for all tankfuls up to this point.



// Answer:

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int miles, totalMiles = 0, gallons, totalGallons = 0;
    double MPG, totalMPG;

    cout << "Enter miles driven (-1 to quit): ";
    // Checking if miles is -1 before entering the loop to potentially skip the loop if the user wants to quit.
    cin >> miles;

    while (miles != -1)
    {
        totalMiles += miles; // Accumulate the total miles
        cout << endl;

        cout << "Enter gallons used: ";
        cin >> gallons;
        totalGallons += gallons; // Accumulate the total gallons used
        cout << endl;

        // Explicit conversion from int to double for accurate division (prevents integer division)
        MPG = static_cast<double>(miles) / gallons;
        cout << showpoint; // Ensure decimal points are shown in the output

        cout << "MPG this trip: " << MPG << endl;

        // Calculate total MPG with explicit conversion to ensure floating-point division
        totalMPG = static_cast<double>(totalMiles) / totalGallons;
        cout << "Total MPG: " << totalMPG << endl << endl;

        cout << "Enter miles driven (-1 to quit): ";
        cin >> miles; // Re-prompt user to continue or quit (IMPORTANT regarding loop continuation)
    }

    return 0;
}
