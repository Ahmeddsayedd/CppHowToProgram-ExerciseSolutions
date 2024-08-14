#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Employee Emp1("Ahmed", "Sayed", 30000);
    Employee Emp2("Mohammed", "Sayed", -55); // Negative salary should be set to 0.

    // Display the yearly salary of each employee.
    cout << "The Employee 1 yearly salary is: " << Emp1.getSalary() * 12 << endl;
    cout << "The Employee 2 yearly salary is: " << Emp2.getSalary() * 12 << endl;

    // Give each employee a 10% raise.
    Emp1.setSalary(static_cast<int>(Emp1.getSalary() * 1.1));
    Emp2.setSalary(static_cast<int>(Emp2.getSalary() * 1.1));

    // Display the yearly salary of each employee after the raise.
    cout << "The Employee 1 yearly salary (with 10% Raise) is: " << Emp1.getSalary() * 12 << endl;
    cout << "The Employee 2 yearly salary (with 10% Raise) is: " << Emp2.getSalary() * 12 << endl;

    // Using setter functions to change the employee's details.
    Emp1.setFirstName("Ali");
    Emp1.setLastName("Hassan");
    Emp1.setSalary(40000); // Setting a new salary.

    cout << "Updated Employee 1 Details: " << Emp1.getFirstName() << " " << Emp1.getLastName()
         << " with a yearly salary of: " << Emp1.getSalary() * 12 << endl;

    return 0;
}
