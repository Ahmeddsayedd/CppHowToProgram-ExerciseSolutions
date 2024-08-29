
// 6.32 (Quality Points for Numeric Grades)

// Solution:

#include <iostream>
using namespace std;

int qualityPoints(int average);

int main()
{
    int avg;

    cout << "Enter your average: ";
    cin >> avg;

    // Check if the average is within a valid range and display the corresponding quality points
    if (qualityPoints(avg) != -1)
        cout << "The points are: " << qualityPoints(avg);
    else
        cout << "Invalid average range, please enter an average between 0 and 100";

    return 0;
}

int qualityPoints(int average)
{
    if (average >= 90 && average <= 100)
        return 4;   // Grade A
    else if (average >= 80 && average <= 89)
        return 3;   // Grade B
    else if (average >= 70 && average <= 79)
        return 2;   // Grade C
    else if (average >= 60 && average <= 69)
        return 1;   // Grade D
    else if (average < 60)
        return 0;   // Grade F
    else
        return -1;  // Invalid average
}
