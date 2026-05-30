#include <iostream>
#include "User.h"

using namespace std;

int main()
{

    User user("Ivan");

    int choice;

    do
    {
        cout << "\n=== FITNESS TRACKER ===" << endl;
        cout << "1. Add Workout" << endl;
        cout << "2. Show Workouts" << endl;
        cout << "3. Exit" << endl;

        cin >> choice;

        if (choice == 1)
        {
            string date, type;

            cout << "Workout date: ";
            cin >> date;

            cout << "Workout type: ";
            cin >> type;

            Workout workout(date, type);

            string exName;

            cout << "Exercise name: ";
            cin >> exName;

            Exercise ex(exName); // <-- ТУК Е ВАЖНО

            int reps;
            double weight;

            cout << "Reps: ";
            cin >> reps;

            cout << "Weight: ";
            cin >> weight;

            ex.addSet(Set(reps, weight));

            workout.addExercise(ex);

            user.addWorkout(workout);

            cout << "Workout added!" << endl;
        }

        else if (choice == 2)
        {
            user.showWorkouts();
        }

    } while (choice != 3);

    return 0;
}