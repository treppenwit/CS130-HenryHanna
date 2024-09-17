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
#include <cmath>
#include <string>
using namespace std;

int main()
{
    //Ask for lengths of sides of a triangle and provide them.
    int side1;
    int side2;
    int side3;
    char ch;
    cout << "Enter sides of triangle in a comm-separated list:" << endl;
    cin >> side1 >> ch >> side2 >> ch >> side3; 
    cout << "a = " << side1 << ", b = " << side2 << " , and c = " << side3 << '.' << endl;
    double periHalf = (side1 + side2 + side3)/2;
    float int areaT = sqrt(periHalf*(periHalf-side1)*(periHalf-side2)*(periHalf-side3));
    cout >> areaT >> endl;


    return 0;
}
