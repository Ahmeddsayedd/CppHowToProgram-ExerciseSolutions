
// 6.12 (Parking Charges)

// Solution:


#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate parking charges based on hours parked
double calculateCharges(double hours);

int main() {
    double hours, TotalHours = 0, TotalCharges = 0;


    cout << "Enter hours parked for 3 Cars: " << endl;

    // Loop through each car to gather input and display charges
    for (int counter = 1; counter <= 3; counter++) {
        cin >> hours;

        cout << fixed << setprecision(2);  // Set output to fixed-point notation with 2 decimal places

        TotalCharges += calculateCharges(hours);
        TotalHours += hours;

        if (counter == 1)
            // Print header row only once after the first input
            cout << setw(4) << "Car" << setw(12) << "Hours" << setw(10) << "Charge" << endl;


        cout << setw(4) << counter << setw(12) << hours << setw(10) << calculateCharges(hours) << endl;
    }

    // Display the total hours and total charges after all inputs are processed
    cout << "TOTAL" << setw(11) << TotalHours << setw(10) << TotalCharges << endl;

    return 0;
}

// Function definition to calculate parking charges based on the given hours
double calculateCharges(double hours) {
    if (hours <= 3)
        return 2.0;
    else if (hours > 3 && hours <= 19)
        return 2.0 + ((hours - 3) * 0.50);
    else
        return 10.0;
}
