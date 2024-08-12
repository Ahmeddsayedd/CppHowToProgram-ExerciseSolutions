// Making a Difference
// 2.31

// (Car-Pool Savings Calculator)
// Research several car-pooling websites. Create an application that calculates your daily driving cost, so that
//you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing
// carbon emissions and reducing traffic congestion.
// The application should input the following information and display the user’s cost per day of driving to work:
// a) Total miles driven per day.
// b) Cost per gallon of gasoline.
// c) Average miles per gallon.
// d) Parking fees per day.
// e) Tolls per day.





#include <iostream>
using namespace std;

int main() {

    int totalMilesPerDay, costPerGallon, milesPerGallon, parkingFeesPerDay, tollsPerDay, gasolineCostPerDay, totalDailyCost;

    cout << "Enter the total miles driven per day: ";
    cin >> totalMilesPerDay;

    cout << "Enter the cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "Enter the average miles per gallon: ";
    cin >> milesPerGallon;

    cout << "Enter the parking fees per day: ";
    cin >> parkingFeesPerDay;

    cout << "Enter the tolls per day: ";
    cin >> tollsPerDay;

    gasolineCostPerDay = (totalMilesPerDay / milesPerGallon) * costPerGallon;

    totalDailyCost = gasolineCostPerDay + parkingFeesPerDay + tollsPerDay;

    cout << "The daily cost of driving to work is: " << totalDailyCost;

    return 0;
}

