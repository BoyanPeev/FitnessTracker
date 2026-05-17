#include <iostream>
#include "Exercise.h"

using namespace std;

int main()
{

    Exercise ex("Bench Press");

    ex.addSet(Set(10, 80));
    ex.addSet(Set(8, 85));

    ex.showExercise();

    return 0;
}