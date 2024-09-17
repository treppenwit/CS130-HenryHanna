/*
Kattis - Triangle Area problem
Function and Unit Testing
Updated By: Henry Hanna
CSCI 130
Date: 09/24

Read and solve Triangle Area problem: https://open.kattis.com/problems/triarea 
*/

#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    //declare variables for each side and area
    float side1, side2, side3, area, s;
    //inputs for each side
    cout << "The length of side 1 is: ";
    cin >> side1; 
    cout << "The length of side 2 is: ";
    cin >> side2; 
    cout << "The length of side 3 is: ";
    cin >> side3; 
    //set definitions for area and perimeter
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s * (s-side1) * (s-side2) * (s-side3));
    //show the area and perimeter values
    cout << "The perimeter of this triangle is: " << s * 2 << endl;
    cout << "The area of this triangle is: " << area << endl;


    return 0;
}
