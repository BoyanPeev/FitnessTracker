#ifndef EXERCISE_H
#define EXERCISE_H

#include <vector>
#include <string>
#include "Set.h"

class Exercise
{
private:
    std::string name;
    std::vector<Set> sets;

public:
    Exercise(std::string n);

    std::string getName() const;

    void addSet(const Set& s);

    void showExercise() const;

    double getMaxWeight() const;
};

#endif