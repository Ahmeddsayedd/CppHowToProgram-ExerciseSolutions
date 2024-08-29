
// 6.42 (Distance Between Points)

// Solution:


#include <iostream>
#include <cmath>
using namespace std;

double distance (double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;
    cout << "Enter the coordinate of first point (x,y): ";
    cin >> x1 >> y1;

    cout << "Enter the coordinate of second point (x,y): ";
    cin >> x2 >> y2;

    cout << "The distance between the two points is: " << distance (x1,y1,x2,y2);

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    // Calculate horizontal and vertical differences
    double horizontal = fabs(x2 - x1);
    double vertical = fabs(y2 - y1);

    // Use the Pythagorean theorem to calculate the distance
    return sqrt(horizontal * horizontal + vertical * vertical);
}

