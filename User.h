#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
#include "Workout.h"

class User
{
private:
    std::string name;
    int age;
    double bodyWeight;
    std::string goal;

    std::vector<Workout> workouts;

public:
    User(std::string n);

    void addWorkout(const Workout &w);

    void showWorkouts() const;

    int getWorkoutCount() const;

    void showPersonalRecord() const;

    void editProfile();

    void showProfile() const;

    void showWorkoutStatistics() const;

    void showExerciseStatistics() const;
};

#endif