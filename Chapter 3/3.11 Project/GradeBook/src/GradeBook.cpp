#include "GradeBook.h"
#include <iostream>
using namespace std;

GradeBook::GradeBook(string name, string Instname): courseName( name ), InstructorName (Instname)
{
    //ctor
}


void GradeBook::setCourseName( string name )
{
    courseName = name;
}
void GradeBook::setInstructorName( string Instname )
{
    InstructorName = Instname;
}
string GradeBook::getCourseName() const
{
    return courseName;
}
string GradeBook::getInstructorName() const
{
    return InstructorName;
}
void GradeBook::displayMessage() const
{
     cout << "Welcome to the grade book for\n"<< getCourseName() << "!\t" << "This course is presented by: " << getInstructorName() << endl;
}
