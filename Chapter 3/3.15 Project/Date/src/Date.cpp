#include "Date.h"
#include <iostream>
using namespace std;
Date::Date(int D, int M, int Y): Day(D), Year(Y)
{
    if (M>12 && M <1)
    {
        Month=1;
    }
    else
        Month = M;
}

void Date::setDay(int D)
{
    Day = D;
}

void Date::setMonth(int M)
{
    Month = M;
}

void Date::setYear(int Y)
{
    Year = Y;
}

int Date::getDay()
{
    return Day;
}

int Date::getMonth()
{
    if (Month>12 && Month <1)
    {
        Month=1;
        return Month;
    }
    else
        return Month;
}

int Date::getYear()
{
    return Year;
}

void Date::DisplayDate ()
{
    cout << Day << "/" << Month << "/" << Year;
}
