#include <iostream>
#include "maximum.h"

using namespace std;

int main()
{
    int int1, int2;
    double doub1, doub2;
    char char1, char2;

    cout << "Enter two integers separated by a space: ";
    cin >> int1 >> int2;
    cout << "The maximum of the two integers is: " << maximum(int1, int2) << endl;

    cout << "Enter two floating points separated by a space: ";
    cin >> doub1 >> doub2;
    cout << "The maximum of the two floating points is: " << maximum(doub1, doub2) << endl;

    cout << "Enter two characters separated by a space: ";
    cin >> char1 >> char2;
    cout << "The maximum of the two characters is: " << maximum(char1, char2) << endl;

    return 0;
}
