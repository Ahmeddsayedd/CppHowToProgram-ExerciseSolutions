
// 6.49 (Circle Area)

// Solution:

#include <iostream>
using namespace std;

inline double circleArea (double radius)
{
    return radius * radius * (22.0/7);
    // Use 22.0/7.0 to ensure floating-point division for a more accurate approximation of pi

}

int main ()
{
    double R;

    do
    {
        cout << "Enter the radius of the circle: ";
        cin >> R;
        if (R<=0)
            cout << "Invalid Radius, please enter a positive value" << endl;
    } while (R<=0);

    cout << "The area of the circle is: " << circleArea (R);

    return 0;
}

