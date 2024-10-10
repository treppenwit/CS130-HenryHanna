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


int main ()
{


    string units;
    float entry, feet, meters;
    double angle, velocity, targetDistance, flightTime, maxHeight, actualDistance;
   
    const double gravity = 9.80665;


    cout << "This program calculates a projectile's flight time, maximum height, and distance from the following variables:" << endl;
    cout << "How would you like units displayed? (feet or meters): ";
    cin >> units;
    if (units == "feet"){
        cout << "You have entered feet." << endl;
    }
    else if (units == "meters"){
        cout << "You have entered meters." << endl;
        
    }
    else
    {
        cout << "Invalid units. Re-Enter prompt."
    }
    cout << "Angle 90.0 or less: ";
    cin >> angle; 
    const double angle_rad = angle * M_PI / 180;
    cout << "Velocity: ";
    cin >> velocity;
    cout << "Target distance: ";
    cin >> targetDistance;

    flightTime = (2 * velocity * sin(angle_rad)) / gravity;
    printf("Flight time of projectile: %.2f seconds\n", flightTime);
    
    maxHeight = pow(velocity, 2)*pow(sin(angle_rad), 2)/(2 * gravity);
    printf("Maximum height of projectile: %.2f meters\n", maxHeight);

    actualDistance = (pow(velocity, 2)) * ((sin(2 * angle_rad))/gravity);
    printf("Distance of projectile: %.1f meters\n", actualDistance);

    return 0;
}