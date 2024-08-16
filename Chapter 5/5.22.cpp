
// (De Morgan’s Laws)


// The original Expressions:
// a) !( x < 5 ) && !( y >= 7 )
// b) !( a == b ) || !( g != 5 )
// c) !( ( x <= 8 ) && ( y > 4 ) )
// d) !( ( i > 4 ) || ( j <= 6 ) )


// The new expressions:

// a) !( (x < 5) || (y >= 7) )
// b) !( (a == b) && (g != 5) )
// c) !( (x <= 8) ||  (y > 4) )
// d) !(i > 4) && !(j <= 6)



// Answer:
#include <iostream>
using namespace std;

int main()
{
    // a) Checking equivalence of expressions !( (x < 5) || (y >= 7) ) and !( x < 5 ) && !( y >= 7 )

    int x, y;
    // Ask the user for input values of x and y before entering the loop
    cout << "Enter x and y separated by a space to check (-1 to exit): ";
    cin >> x >> y;

    while ((x != -1) && (y != -1))
    {
        if ((!(x < 5) && !(y >= 7)) == (!( (x < 5) || (y >= 7) )))
        {
            cout << "Equivalent" << endl;
        }
        else
        {
            cout << "Not Equivalent" << endl;
        }

        cout << "Enter x and y separated by a space to check (-1 to exit): ";
        cin >> x >> y;
    }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    // b) Checking equivalence of expressions !( (a == b) && (g != 5) ) and !( a == b ) || !( g != 5 )

    int a, b, g;
    cout << "Enter a, b, and g separated by a space to check (-1 to exit): ";
    cin >> a >> b >> g;

    while ((a != -1) && (b != -1) && (g != -1))
    {
        if ((!(a == b) || !(g != 5)) == (!( (a == b) && (g != 5) )))
        {
            cout << "Equivalent" << endl;
        }
        else
        {
            cout << "Not Equivalent" << endl;
        }

        cout << "Enter a, b, and g separated by a space to check (-1 to exit): ";
        cin >> a >> b >> g;
    }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    // c) Checking equivalence of expressions !( (x <= 8) || (y > 4) ) and !( ( x <= 8 ) && ( y > 4 ) )

    cout << "Enter x and y separated by a space to check (-1 to exit): ";
    cin >> x >> y;

    while ((x != -1) && (y != -1))
    {
        if ((!(x <= 8) && !(y > 4)) == (!( (x <= 8) || (y > 4) )))
        {
            cout << "Equivalent" << endl;
        }
        else
        {
            cout << "Not Equivalent" << endl;
        }

        cout << "Enter x and y separated by a space to check (-1 to exit): ";
        cin >> x >> y;
    }

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    // d) Checking equivalence of expressions !(i > 4) && !(j <= 6) and !( ( i > 4 ) || ( j <= 6 ) )

    int i, j;
    cout << "Enter i and j separated by a space to check (-1 to exit): ";
    cin >> i >> j;

    while ((i != -1) && (j != -1))
    {
        if ((!(i > 4) && !(j <= 6)) == (!( (i > 4) || (j <= 6) )))
        {
            cout << "Equivalent" << endl;
        }
        else
        {
            cout << "Not Equivalent" << endl;
        }

        cout << "Enter i and j separated by a space to check (-1 to exit): ";
        cin >> i >> j;
    }

    return 0;
}




// NOTES:
// Parentheses are essential to control the order of operations.
// For example, !( (x < 5) || (y >= 7) ) ensures the OR operation is evaluated first,
// then NOT is applied. Without parentheses, operator precedence could lead to incorrect results.


