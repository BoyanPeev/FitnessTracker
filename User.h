#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include "Workout.h"

using namespace std;

class User
{
private:
    string name;
    vector<Workout> workouts;

public:
    User(string n)
    {
        name = n;
    }

    void addWorkout(const Workout &w)
    {
        workouts.push_back(w);
    }

    void showWorkouts()
    {

        cout << "\nUser: " << name << endl;

        for (int i = 0; i < workouts.size(); i++)
        {
            workouts[i].showWorkout();
        }
    }
};

#endif