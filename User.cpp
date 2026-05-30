#include "User.h"
#include <iostream>

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
    cout << "\nPersonal Record feature coming soon." << endl;
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