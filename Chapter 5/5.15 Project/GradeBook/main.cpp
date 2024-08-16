#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook myGradeBook( "CS101 C++ Programming" );

    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();

    return 0;
}
