#include <iostream>
#include <GradeBook.h>

using namespace std;

int main()
{
     GradeBook gradeBook1( "CS101 Introduction to C++ Programming" , "Ahmed Sayed" );
     GradeBook gradeBook2( "CS102 Data Structures in C++" , "Ahmed Soliman");

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();

    return 0;
}
