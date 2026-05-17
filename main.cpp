#include <iostream>
#include "Workout.h"

using namespace std;

int main()
{

    Workout workout("17.05.2026", "Push");

    Exercise bench("Bench Press");
    bench.addSet(Set(10, 80));
    bench.addSet(Set(8, 85));

    workout.addExercise(bench);

    workout.showWorkout();

    return 0;
}