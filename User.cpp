#include "User.h"
#include <iostream>
#include <map>

using namespace std;

User::User(string n)
{
    name = n;

    age = 0;
    bodyWeight = 0;
    goal = "Not set";
}

void User::addWorkout(const Workout &w)
{
    workouts.push_back(w);
}

void User::showWorkouts() const
{
    cout << "\nUser: " << name << endl;

    for (int i = 0; i < workouts.size(); i++)
    {
        workouts[i].showWorkout();
    }
}

int User::getWorkoutCount() const
{
    return workouts.size();
}

void User::showPersonalRecord() const
{
    std::map<std::string, double> personalRecords;

    for (int i = 0; i < workouts.size(); i++)
    {
        const std::vector<Exercise> &exercises =
            workouts[i].getExercises();

        for (int j = 0; j < exercises.size(); j++)
        {
            std::string exerciseName =
                exercises[j].getName();

            double currentMax =
                exercises[j].getMaxWeight();

            if (personalRecords.find(exerciseName) ==
                personalRecords.end())
            {
                personalRecords[exerciseName] =
                    currentMax;
            }
            else if (currentMax >
                     personalRecords[exerciseName])
            {
                personalRecords[exerciseName] =
                    currentMax;
            }
        }
    }

    cout << "\n=== PERSONAL RECORDS ===" << endl;

    for (auto it = personalRecords.begin();
         it != personalRecords.end();
         it++)
    {
        cout << it->first
             << " -> "
             << it->second
             << " kg"
             << endl;
    }
}

void User::editProfile()
{
    cout << "\nName: ";
    getline(cin, name);

    cout << "Age: ";
    cin >> age;

    cout << "Body weight (kg): ";
    cin >> bodyWeight;

    cin.ignore();

    cout << "Goal: ";
    getline(cin, goal);

    cout << "\nProfile updated successfully!" << endl;
}

void User::showProfile() const
{
    cout << "\n=== USER PROFILE ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << bodyWeight << " kg" << endl;
    cout << "Goal: " << goal << endl;
}

void User::showWorkoutStatistics() const
{
    cout << "\n=== WORKOUT STATISTICS ===" << endl;
    cout << "Total workouts: "
         << workouts.size()
         << endl;
}