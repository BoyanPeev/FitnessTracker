#include <iostream>
#include "User.h"

using namespace std;

int main()
{

    User user("Ivan");

    Workout push("17.05.2026", "Push");

    Exercise bench("Bench Press");
    bench.addSet(Set(10, 80));
    bench.addSet(Set(8, 85));

    push.addExercise(bench);

    user.addWorkout(push);

    user.showWorkouts();

    return 0;
}