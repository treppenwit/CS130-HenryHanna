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

float flightTime(double velocity, double angle, float gravity)
{
    float result = (2 * velocity * sin(angle)) / gravity;
    return result;
}

float maxHeight(double velocity, double angle, float gravity)
{
    float result = ((pow(velocity, 2)) * ((pow(sin(angle), 2)) / (2 * gravity)));
    return result;
}

float actualDistance(double velocity, double angle, float gravity)
{
    float result = (pow(velocity, 2)) * ((sin(2 * angle))/gravity);
    return result;
}

int main ()
{


    string units;
    float entry, feet, meters;
    double angle, velocity, targetDistance, time, height, distance;
    const double angle_rad = (angle * M_PI) / (180);
    const float gravity = 9.80665;


    cout << "This program calculates a projectile's flight time, maximum height, and distance from the following variables:" << endl;
    cout << "How would you like units displayed? (feet or meters): ";
    cin >> units;
    if (units == "feet"){
        cout << "You have entered feet." << endl;
        const float gravity = 9.80665 * 3.281;
    }
    if (units == "meters"){
        cout << "You have entered meters." << endl;
        }
    
    cout << "Angle 90.0 or less: ";
    cin >> angle;
    cout << "Velocity: ";
    cin >> velocity;
    cout << "Target distance: ";
    cin >> targetDistance;

    flightTime(velocity, angle_rad, gravity);
    time = flightTime(velocity, angle_rad, gravity);
    printf("Flight time of projectile: %.2f seconds\n", time);
    
    maxHeight(velocity, angle_rad, gravity);
    height = maxHeight(velocity, angle_rad, gravity);
    printf("Maximum height of projectile: %.2f "units"\n", height);

    actualDistance(velocity, angle_rad, gravity);
    distance = actualDistance(velocity, angle_rad, gravity);
    printf("Distance of projectile: %.1f "units"\n", distance);

    return 0;
}