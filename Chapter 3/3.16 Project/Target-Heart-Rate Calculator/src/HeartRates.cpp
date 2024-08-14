#include "HeartRates.h"
#include <iostream>
#include <string>
using namespace std;

HeartRates::HeartRates(string fn, string ln, int d, int m, int y)
    : FirstName(fn), LastName(ln), Day(d), Month(m), Year(y) {}

void HeartRates::setFirstName(string fn) { FirstName = fn; }
void HeartRates::setLastName(string ln) { LastName = ln; }
void HeartRates::setDay(int D) { Day = D; }
void HeartRates::setMonth(int M) { Month = M; }
void HeartRates::setYear(int Y) { Year = Y; }
string HeartRates::getFirstName() { return FirstName; }
string HeartRates::getLastName() { return LastName; }
int HeartRates::getDay() { return Day; }
int HeartRates::getMonth() { return Month; }
int HeartRates::getYear() { return Year; }

int HeartRates::getAge(int currentDay, int currentMonth, int currentYear)
{
    int age = currentYear - Year;
    if (currentMonth < Month || (currentMonth == Month && currentDay < Day)) {
        age--; // Not yet reached birthday this year
    }
    return age;
}

int HeartRates::getMaximumHeartRate(int currentDay, int currentMonth, int currentYear) { // Current date is passed to calculate age using the getAge function
    int age = getAge(currentDay, currentMonth, currentYear);
    return 220 - age;
}

void HeartRates::getTargetHeartRate(int currentDay, int currentMonth, int currentYear) {
    int maxHeartRate = getMaximumHeartRate(currentDay, currentMonth, currentYear);
    int minTarget = 0.50 * maxHeartRate;
    int maxTarget = 0.85 * maxHeartRate;
    cout << "Your target heart rate is: " << minTarget << "-" << maxTarget << endl;
}
