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
#include <iomanip>
using namespace std;

//  Population class declaration
class Population
{
private:
    int population, births, deaths;

public:
    // default constructor: with no parameters
    Population()
    {
        population = 2;
        births = 0;
        deaths = 0;
    }

    // constructor
    Population(int p, int b, int d)
    {
        population = p;
        births = b;
        deaths = d;
    }

    // birthrate member function
    double getBirthrate();
    // deathrate member function
    double getDeathrate();

    void setPopulation(int);
    void setBirth(int);
    void setDeath(int);
    int getPopulation();
    int getBirth(int);
    int getDeaths(int);
};

// member functions
void Population::setPopulation(int p)
{
    if (population < 2)
    {
        population = 2;
        cout << "Error: Invalid population input!" << endl;
    }
    else
    {
        population = p;
    }
}

void Population::setBirth(int b)
{
    if (births < 0)
    {
        births = 0;
        cout << "Error: Invalid births input!" << endl;
    }
    else
    {
        births = b;
    }
}

void Population::setDeath(int d)
{
    if (deaths < 0)
    {
        deaths = 0;
        cout << "Error: Invalid deaths input!" << endl;
    }
    else
    {
        deaths = d;
    }
}

int Population::getPopulation()
{
    return population;
}

int Population::getBirth(int)
{
    return births;
}

int Population::getDeaths(int)
{
    return deaths;
}

// calculating functions
double Population::getBirthrate()
{
    return (double)births / (double)population;
}

double Population::getDeathrate()
{
    return (double)deaths / (double)population;
}

// main function
int main()
{
    // instantiation of a population object
    Population x;

    int xBirths, xDeaths, xPopulation;

    // getting the values
    cout << "What is the population: " << endl;
    cin >> xPopulation;

    cout << "What is the number of births: " << endl;
    cin >> xBirths;

    cout << "What are the number of deaths: " << endl;
    cin >> xDeaths;

    // set functions
    x.setPopulation(xPopulation);
    x.setBirth(xBirths);
    x.setDeath(xDeaths);

    // calculating the values
    cout << "The population is: " << x.getPopulation() << endl;
    cout << "The birthrate is: " << x.getBirthrate() << endl;
    cout << "The deathrate is: " << x.getDeathrate() << endl;

    return 0;
}