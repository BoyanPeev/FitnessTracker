#include "User.h"
#include <iostream>

using namespace std;

User::User(string n)
{
    name = n;
}

void User::addWorkout(const Workout &w)
{
    workouts.push_back(w);
}

void User::showWorkouts() const
{
    cout << "\nUser: " << name << endl;

    for (int i = 0; i < workouts.size(); i++)
    {
        workouts[i].showWorkout();
    }
}

int User::getWorkoutCount() const
{
    return workouts.size();
}

// засега опростен PR (ще го разширим по-късно)
void User::showPersonalRecord() const
{
    double maxWeight = 0;

    for (int i = 0; i < workouts.size(); i++)
    {
        // временно празно - ще доразвием в следващ commit
    }

    cout << "\nPersonal Record: " << maxWeight << " kg" << endl;
}