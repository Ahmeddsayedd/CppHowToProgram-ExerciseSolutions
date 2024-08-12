// Making a Difference
// 2.30

// (Body Mass Index Calculator)
// Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer,
// the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index.
// Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:





#include <iostream>
using namespace std;
int main ()
{
    int weight, height, BMI; // Note: in this chapter we only learned to use the int type to represent whole numbers.
    cout << "Enter your weight in kilogram: ";
    cin >> weight;

    cout << "Enter your height in meter: ";
    cin >> height;

    BMI = weight / (height*height);

    cout << "Your Body Mass Index is: " << BMI << "\n";

    cout << "BMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater";

    return 0;

}
