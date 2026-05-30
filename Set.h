#ifndef SET_H
#define SET_H

#include <iostream>

class Set
{
private:
    int reps;
    double weight;

public:
    Set(int r, double w);

    int getReps() const;
    double getWeight() const;

    void showSet() const;
};

#endif