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

float converyFeetBack(float entry)
{
    float result = entry * 3.281;
    return result;
}

int main ()
{
    string units;
    float entry, feet, meters;
    const float gravity = 9.80665;


    cout << "How would you like units displayed? (feet or meters)" << endl;
    cin >> units;
    if (units == "feet"){
        cout << "You have entered feet." << endl;
        feet = convertFeet(entry);
        meters = convertFeetBack(feet);
    }
    if (units == "meters"){
        cout << "You have entered meters." << endl;
        }
    
    
    return 0;
}