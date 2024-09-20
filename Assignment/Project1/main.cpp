/*
Project 1
Name: Henry Hanna
CSCI 130
09/19/24
*/


#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

float convertFeet(float entry)
{
    float result = entry / 3.281;
    return result;
}

float convertFeetBack(float entry)
{
    float result = entry * 3.281;
    return result;
}

float flightTime(double velocity, double angle, float gravity)
{
    result = (2 * velocity * sin(angle)) / gravity;
    return result;
}


int main ()
{


    string units;
    float entry, feet, meters;
    double angle, velocity, targetDistance, time;

    const float gravity = 9.80665;

    const string bow1 = "                                                      |";
    const string bow2 = "                                                        \."








    cout << "This program calculates a projectile's flight time, maximum height, and distance from the following variables:" << endl;
    cout << "Angle 90.0 or less: ";
    cin >> angle;
    cout << "Velocity (units in next question): ";
    cin >> velocity;
    cout << "How would you like units displayed? (feet or meters): ";
    cin >> units;
    if (units == "feet"){
        cout << "You have entered feet." << endl;
        feet = convertFeet(entry);
        meters = convertFeetBack(feet);
    }
    if (units == "meters"){
        cout << "You have entered meters." << endl;
        }
    cout << "How far is your target? ";
    cin >> targetDistance;
    
    cout << bow1 << endl;
    cout << bow2 << endl;
    
    
    
    
    
    
    
    
    printf("Flight time of projectile: %f\n", time);
    










    
    return 0;
}