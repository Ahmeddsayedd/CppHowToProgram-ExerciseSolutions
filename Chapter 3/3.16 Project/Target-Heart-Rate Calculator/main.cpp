#include <iostream>
#include "HeartRates.h"
using namespace std;

int main()
{
    string fn, ln;
    int D, M, Y, currentD, currentM, currentY;

    // Construct the object using user input after getting the values.
    cout << "Enter First Name: ";
    cin >> fn;
    cout << "Enter Last Name: ";
    cin >> ln;
    cout << "Enter Date of birth (DD/MM/YYYY): ";
    cin >> D >> M >> Y;

    // Construct the HeartRates object with user input
    HeartRates HR(fn, ln, D, M, Y);

    cout << "The first Name is: " << HR.getFirstName() << endl;
    cout << "The Last Name is: " << HR.getLastName() << endl;
    cout << "The Date of birth is: " << HR.getDay() << "/" << HR.getMonth() << "/" << HR.getYear() << endl;

    // Get current date from the user for age calculation
    cout << "Enter the current Date (DD/MM/YYYY) to calculate your Age: ";
    cin >> currentD >> currentM >> currentY;

    int age = HR.getAge(currentD, currentM, currentY);
    cout << "Your Age is: " << age << " years" << endl;
    cout << "Maximum Heart Rate is: " << HR.getMaximumHeartRate(currentD, currentM, currentY) << endl;

    HR.getTargetHeartRate(currentD, currentM, currentY);

    return 0;
}
