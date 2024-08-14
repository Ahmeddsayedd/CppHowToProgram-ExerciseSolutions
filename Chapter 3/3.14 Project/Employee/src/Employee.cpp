#include "Employee.h"
#include <iostream> // Include iostream to use cout for output.

using namespace std;

Employee::Employee(string fn, string ln, int s) : firstName(fn), lastName(ln) {
    if (s > 0)
        monthlySalary = s;
    else
        monthlySalary = 0;
}

void Employee::setFirstName(string fn) {
    firstName = fn;
}

void Employee::setLastName(string ln) {
    lastName = ln;
}

void Employee::setSalary(int s) {
    if (s > 0)
        monthlySalary = s;
    else
        monthlySalary = 0;
}

string Employee::getFirstName() {
    return firstName;
}

string Employee::getLastName() {
    return lastName;
}

int Employee::getSalary() {
    return monthlySalary;
}
