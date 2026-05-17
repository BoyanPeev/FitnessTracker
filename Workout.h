#ifndef WORKOUT_H
#define WORKOUT_H

#include <iostream>
#include <vector>
#include "Exercise.h"

using namespace std;

class Workout
{
private:
    string date;
    string type;
    vector<Exercise> exercises;

public:
    Workout(string d, string t)
    {
        date = d;
        type = t;
    }

    void addExercise(const Exercise &e)
    {
        exercises.push_back(e);
    }

    void showWorkout()
    {
        cout << "\nWorkout Date: " << date << endl;
        cout << "Workout Type: " << type << endl;

        for (int i = 0; i < exercises.size(); i++)
        {
            exercises[i].showExercise();
        }
    }
};

#endif