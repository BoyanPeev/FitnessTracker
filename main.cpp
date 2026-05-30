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
        cout << "3. Edit Profile" << endl;
        cout << "4. Show Profile" << endl;
        cout << "5. Exit" << endl;
        cout << "5. Personal Record" << endl;
        cout << "6. Workout Statistics" << endl;
        cout << "7. Exercise Statistics" << endl;
        cout << "8. Exit" << endl;

        cin >> choice;
        cin.ignore();

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

            cin.ignore();

            ex.addSet(Set(reps, weight));
            workout.addExercise(ex);
            user.addWorkout(workout);

            cout << "Workout added!" << endl;
        }

        else if (choice == 2)
        {
            user.showWorkouts();
        }

        else if (choice == 3)
        {
            user.editProfile();
        }

        else if (choice == 4)
        {
            user.showProfile();
        }

        else if (choice == 5)
        {
            user.showPersonalRecord();
        }

        else if (choice == 6)
        {
            user.showWorkoutStatistics();
        }

        else if (choice == 7)
        {
            user.showExerciseStatistics();
        }

    } while (choice != 8);

    return 0;
}