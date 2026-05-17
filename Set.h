#ifndef SET_H
#define SET_H

#include <iostream>

using namespace std;

class Set
{
private:
    int reps;
    double weight;

public:
    Set(int r, double w)
    {
        reps = r;
        weight = w;
    }

    void showSet()
    {
        cout << reps << " reps - "
             << weight << " kg" << endl;
    }
};

#endif