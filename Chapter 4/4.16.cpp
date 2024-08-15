// (Salary Calculator)
// Develop a C++ program that uses a while statement to determine the gross pay for each of several employees.
// The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
// You are given a list of the employees of the company, the number of hours each employee worked last week, and the hourly rate of each employee.
// Your program should input this information for each employee and should determine and display the employee’s gross pay.



// Answer:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int hours;
    double h_rate, salary;

    cout << "Enter hours worked (or -1 to quit): ";
    cin >> hours;

    while (hours != -1) {
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> h_rate;

        if (hours <= 40) {
            salary = static_cast<double>(hours) * h_rate;
        } else {
            // Calculate salary with overtime pay
            // 40 hours of straight time pay
            // Hours beyond 40 are paid at 1.5 times the hourly rate
            salary = (40 * h_rate) + ((hours - 40) * h_rate * 1.5);
        }

        // Output salary with fixed-point notation and two decimal places
        cout << fixed << setprecision(2);
        cout << "Salary is $" << salary << endl;

        cout << "Enter hours worked (or -1 to quit): ";
        cin >> hours;
    }

    return 0;
}
