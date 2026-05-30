#ifndef WORKOUT_H
#define WORKOUT_H

#include <vector>
#include <string>
#include "Exercise.h"

class Workout
{
private:
    std::string date;
    std::string type;
    std::vector<Exercise> exercises;

public:
    Workout(std::string d, std::string t);

    void addExercise(const Exercise &e);

    void showWorkout() const;

    int getExerciseCount() const;
};

#endif