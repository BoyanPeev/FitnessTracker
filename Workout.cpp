#include "Workout.h"
#include <iostream>

using namespace std;

Workout::Workout(string d, string t)
{
    date = d;
    type = t;
}

void Workout::addExercise(const Exercise &e)
{
    exercises.push_back(e);
}

void Workout::showWorkout() const
{
    cout << "\nWorkout Date: " << date << endl;
    cout << "Workout Type: " << type << endl;

    for (int i = 0; i < exercises.size(); i++)
    {
        exercises[i].showExercise();
    }
}

int Workout::getExerciseCount() const
{
    return exercises.size();
}

const std::vector<Exercise> &Workout::getExercises() const
{
    return exercises;
}