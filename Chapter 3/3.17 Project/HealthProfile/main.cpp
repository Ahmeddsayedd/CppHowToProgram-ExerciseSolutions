#include <iostream>
#include "HealthProfile.h"
using namespace std;

int main()
{
    string fn, ln, G;
    int D, M, Y, H, W, currentD, currentM, currentY;

    // Construct the object using user input after getting the values.
    cout << "Enter First Name: ";
    cin >> fn;
    cout << "Enter Last Name: ";
    cin >> ln;
    cout << "Enter Gender: ";
    cin >> G;
    cout << "Enter Date of birth (DD/MM/YYYY): ";
    cin >> D >> M >> Y;
    cout << "Enter Your Height: ";
    cin >> H;
    cout << "Enter Your Weight: ";
    cin >> W;

    // Construct the HeartRates object with user input
    HealthProfile HP(fn, ln, G, D, M, Y, H, W);

    cout << "The first Name is: " << HP.getFirstName() << endl;
    cout << "The Last Name is: " << HP.getLastName() << endl;
    cout << "The Gender is: " << HP.getGender() << endl;
    cout << "The Date of birth is: " << HP.getDay() << "/" << HP.getMonth() << "/" << HP.getYear() << endl;
    cout << "The Height is: " << HP.getHeight() << endl;
    cout << "The Weight is: " << HP.getWeight() << endl;

    // Get current date from the user for age calculation
    cout << "Enter the current Date (DD/MM/YYYY) to calculate your Age: ";
    cin >> currentD >> currentM >> currentY;

    int age = HP.getAge(currentD, currentM, currentY);
    cout << "Your Age is: " << age << " years" << endl;
    cout << "Maximum Heart Rate is: " << HP.getMaximumHeartRate(currentD, currentM, currentY) << endl;

    HP.getTargetHeartRate(currentD, currentM, currentY);
    cout << endl;

    cout << "The BMI IS: " << HP.getBMI(H,W) << endl;
    cout << "BMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater";

    return 0;
}
