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

// instantiating the Population class
class Population
{
    // private and public specifiers
private:
    // declaring member variables
    int population, births, deaths;

public:
    // setting variables depending on input
    void setPopulation(int);
    void setBirthrate(int);
    void setDeathrate(int);
    // birthrate member function
    int getBirthrate(int births, int population);

    // deathrate member function
    int getDeathrate(int deaths, int population);
};

// member functions
void Population::setPopulation(int x)
{
    if (population > 2)
    {
        population = x;
    }
    else
    {
        population = 2;
        cout << "Error: Invalid population input!" << endl;
    }
};

void Population::setBirthrate(int y)
{
    if (births > 0)
    {
        births = y;
    }
    else
    {
        births = 0;
        cout << "Error: Invalid births input!" << endl;
    }
}

void Population::setDeathrate(int z)
{
    if (deaths > 0)
    {
        deaths = z;
    }
    else
    {
        deaths = 0;
        cout << "Error: Invalid deaths input!" << endl;
    }
}

int Population::getBirthrate(int births, int population)
{
    int birthrate;
    birthrate = births / population;
}

int Population::getDeathrate(int deaths, int population)
{
    int deathrate;
    int deathrate = deaths / population;
}

// main function
int main()
{

    return 0;
}