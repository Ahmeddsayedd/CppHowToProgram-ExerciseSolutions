
// 6.39 (Towers of Hanoi: Iterative Version)


// This code is not my original work. It was authored by [iRobot42].
// The original code can be found in their repository at
// [https://github.com/iRobot42/Deitels-Cpp-10e/blob/master/06%20-%20Functions%20and%20an%20Introduction%20to%20Recursion/06.39%20-%20Towers%20of%20Hanoi.%20Iterative%20Version/ex_06_39.cpp].
// I am using it here for educational purposes as part of the exercise answers for "C++ How to Program" by Deitel.

// Solution:

#include <cmath>
#include <iostream>

using namespace std;

void move( int, int, int );

int main() {

   int d;

   do {
      cout << "Number of disks: ";
      cin >> d;
   } while ( d < 1 );

   const int MOVES{ static_cast< int >( pow( 2, d ) - 1 ) };
   int m{ 0 };

   while ( ++m <= MOVES ) {

      if ( m % 2 )
         move( d, m, 1 );
      else {

         int mv{ m };
         int dsk{ 0 };

         while ( !( mv % 2 ) ) {
            dsk++;
            mv /= 2;
         }

         move( d, m, dsk + 1 );
      }

      cout << endl;
   }

   return 0;
}

void move( int disks, int turn, int d ) {

   int b{ disks % 2 ? 3 : 2 };
   int c{ disks % 2 ? 2 : 3 };

   int m{ static_cast< int >( ( ( turn / pow( 2, d - 1 ) ) - 1 ) / 2 ) };

   if ( d % 2 )
      switch ( m % 3 ) {
      case 0: cout << 1 << " -> " << b; break;
      case 1: cout << b << " -> " << c; break;
      case 2: cout << c << " -> " << 1; break;
      }
   else
      switch ( m % 3 ) {
      case 0: cout << 1 << " -> " << c; break;
      case 1: cout << c << " -> " << b; break;
      case 2: cout << b << " -> " << 1; break;
      }
}
