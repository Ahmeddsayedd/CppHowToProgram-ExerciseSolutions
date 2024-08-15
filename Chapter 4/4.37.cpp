// (World Population Growth)
// World population has grown considerably over the centuries. Continued growth could eventually challenge the limits of breathable air,
// drinkable water, arable cropland, and other precious resources. There is evidence that growth has been slowing in recent years and that world
// population could peak some time this century, then start to decline.
// For this exercise, research world population growth issues online. Be sure to investigate various viewpoints. Get estimates for the current world
// population and its growth rate (the percentage by which it is likely to increase this year).
// Write a program that calculates world population growth each year for the next 75 years, using the simplifying assumption that the current growth
// rate will stay constant. Print the results in a table. The first column should display the year from year 1 to year 75. The second column should
// display the anticipated world population at the end of that year. The third column should display the numerical increase in the world population
// that would occur that year.
// Using your results, determine the year in which the population would be double what it is today if this year’s growth rate were to persist.


// Answer:

// Decoding Code:
#include <iostream>
using namespace std;

int main()
{
    int rows = 1, columns = 1, counter = 0, year, Year = 0;
    long long worldPopulation = 8125672439, OldPopulation;
    long long populationYear = 8125672439;

    while (rows <= 75)
    {
        columns = 1;
        while (columns <= 3)
        {
            if (columns == 1)
            {
                year = 2024 + counter;
                cout << year << "\t \t";
                counter++;
            }
            else if (columns == 2)
            {
                OldPopulation = worldPopulation;
                worldPopulation = worldPopulation + worldPopulation * 0.008;
                cout << worldPopulation << "\t \t";
            }
            else if (columns == 3)
            {
                cout << worldPopulation - OldPopulation << "\n";
            }
            columns++;
        }
        if (worldPopulation >= 2 * populationYear && Year == 0) {
            // Note: Use >= instead of == to find the year when the population first exceeds double the initial value.
            // This accounts for cases where the population grows beyond double the initial value, not just when it exactly equals it.
            Year = year;
        }
        rows++;
    }

    if (Year != 0) {
        cout << "The year which has double the population of today is: " << Year << endl;
    } else {
        cout << "Population does not double in the next 75 years based on the given growth rate." << endl;
    }

    return 0;
}
