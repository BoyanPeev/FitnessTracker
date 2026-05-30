#include "Set.h"
#include <iostream>

using namespace std;

Set::Set(int r, double w)
{
    reps = r;
    weight = w;
}

int Set::getReps() const
{
    return reps;
}

double Set::getWeight() const
{
    return weight;
}

void Set::showSet() const
{
    cout << reps << " reps - " << weight << " kg" << endl;
}