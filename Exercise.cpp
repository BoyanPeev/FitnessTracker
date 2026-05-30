#include "Exercise.h"
#include <iostream>

using namespace std;

Exercise::Exercise(string n)
{
    name = n;
}

string Exercise::getName() const
{
    return name;
}

void Exercise::addSet(const Set &s)
{
    sets.push_back(s);
}

void Exercise::showExercise() const
{
    cout << "Exercise: " << name << endl;

    for (int i = 0; i < sets.size(); i++)
    {
        cout << "Set " << i + 1 << ": ";
        sets[i].showSet();
    }
}

double Exercise::getMaxWeight() const
{
    double maxW = 0;

    for (int i = 0; i < sets.size(); i++)
    {
        if (sets[i].getWeight() > maxW)
            maxW = sets[i].getWeight();
    }

    return maxW;
}