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
        cin.ignore(); // FIX: clears buffer for getline

        if (choice == 1)
        {
            string date, type, exName;

            cout << "Workout date: ";
            getline(cin, date);

            cout << "Workout type: ";
            getline(cin, type);

            Workout workout(date, type);

            cout << "Exercise name: ";
            getline(cin, exName);

            Exercise ex(exName);

            int reps;
            double weight;

            cout << "Reps: ";
            cin >> reps;

            cout << "Weight: ";
            cin >> weight;

            cin.ignore(); // IMPORTANT after numeric input

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