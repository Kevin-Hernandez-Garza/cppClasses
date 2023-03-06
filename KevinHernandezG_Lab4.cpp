//******************************************************************
// Author: Kevin Hernandez-Garza
// Assignment Number: Programming Assignment "4"
// File Name: KevinHernandezG_Lab4.cpp
// Course/Section: COSC 1337 Section -009
// Due Date: 3/7/23
// Instructor: Dr.Haytham Mohamed
//
// This program gathers information on the current population, annual births, deaths for a geographical area by implement a C++ class.
//  ******************************************************************

// directives
#include <iostream>
#include <string>

using namespace std;

// class declaration
class Population
{
    // private and public specifiers
private:
    // declaring member variables
    int population = 2, births = 0, deaths = 0;

public:
    // birth rate function
    int getBirthrate(int births, int population)
    {
        int birthrate;
        birthrate = births / population;
    }
    // death rate function
    int getDeathrate(int deaths, int population)
    {
        int deathrate;
        deathrate = deaths / population;
    }
};

// main function
int main()
{

    return 0;
}