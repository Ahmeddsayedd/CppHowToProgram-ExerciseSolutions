#include "HealthProfile.h"
#include <iostream>
#include <string>
using namespace std;

HealthProfile::HealthProfile(string fn, string ln, string G, int d, int m, int y, int H, int W)
    : FirstName(fn), LastName(ln), Gender(G), Day(d), Month(m), Year(y), Height(H), Weight(W) {}

void HealthProfile::setFirstName(string fn) { FirstName = fn; }
void HealthProfile::setLastName(string ln) { LastName = ln; }
void HealthProfile::setGender(string G) { Gender = G; }
void HealthProfile::setDay(int D) { Day = D; }
void HealthProfile::setMonth(int M) { Month = M; }
void HealthProfile::setYear(int Y) { Year = Y; }
void HealthProfile::setHeight(int H) { Height = H; }
void HealthProfile::setWeight(int W) { Weight = W; }

string HealthProfile::getFirstName() { return FirstName; }
string HealthProfile::getLastName() { return LastName; }
string HealthProfile::getGender() { return Gender; }
int HealthProfile::getDay() { return Day; }
int HealthProfile::getMonth() { return Month; }
int HealthProfile::getYear() { return Year; }
int HealthProfile::getHeight() { return Height; }
int HealthProfile::getWeight() { return Weight; }
int HealthProfile::getBMI(int H, int W)
{
    BMI= W / (H*H);
    return BMI;
}

int HealthProfile::getAge(int currentDay, int currentMonth, int currentYear)
{
    int age = currentYear - Year;
    if (currentMonth < Month || (currentMonth == Month && currentDay < Day)) {
        age--; // Not yet reached birthday this year
    }
    return age;
}

int HealthProfile::getMaximumHeartRate(int currentDay, int currentMonth, int currentYear) { // Current date is passed to calculate age using the getAge function
    int age = getAge(currentDay, currentMonth, currentYear);
    return 220 - age;
}

void HealthProfile::getTargetHeartRate(int currentDay, int currentMonth, int currentYear) {
    int maxHeartRate = getMaximumHeartRate(currentDay, currentMonth, currentYear);
    int minTarget = 0.50 * maxHeartRate;
    int maxTarget = 0.85 * maxHeartRate;
    cout << "Your target heart rate is: " << minTarget << "-" << maxTarget << endl;
}
