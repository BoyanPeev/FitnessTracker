#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include <vector>
#include "Set.h"

using namespace std;

class Exercise
{
private:
    string name;
    vector<Set> sets;

public:
    Exercise(string n)
    {
        name = n;
    }

    void addSet(const Set &s)
    {
        sets.push_back(s);
    }

    void showExercise()
    {
        cout << "Exercise: " << name << endl;

        for (int i = 0; i < sets.size(); i++)
        {
            cout << "Set " << i + 1 << ": ";
            sets[i].showSet();
        }
    }
};

#endif