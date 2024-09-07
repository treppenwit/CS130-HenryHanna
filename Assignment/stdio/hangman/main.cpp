//Hw1
//Name: Henry Hanna
//Course: CS130
//This program uses input and output to display seven stages of the game hangman.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string centerText(int width, const string& str) {
    int len = str.length();
    if(width < len) { 
        return str; 
    }
    int diff = width - len;
    int pad1 = diff/2;
    int pad2 = diff - pad1;
    return string(pad1, ' ') + str + string(pad2, ' ');
}

int main ()
{
    const int hmWidth = 100;
    string divider = string(hmWidth, '_');
    cout << centerText(100, "Welcome to Hangman!") << endl;

    string Name;
    cout << "Enter your name: "; 
    getline(cin, Name);

    cout << "Hello " << Name << ", any last words?" << endl;

    const string hmLength1 = "    |-----------------";
    const string hmLength2 = "    |/        |       ";
    const string Stickman1 = "    |         O       ";
    const string Stickman2 = "    |         |       ";
    const string Stickman3 = "    |        /|       ";
    const string Stickman4 = "    |        /|\\     ";
    const string Stickman5 = "    |        /        ";
    const string Stickman6 = "    |        / \\     ";
    const string hmLength3 = "    |                 ";
    const string hmLength4 = "===========           ";


    string hm1 = centerText(hmWidth, hmLength1);
    string hm2 = centerText(hmWidth, hmLength2);
    string hm3 = centerText(hmWidth, hmLength3);
    string hm4 = centerText(hmWidth, hmLength4);
    string hmhead = centerText(hmWidth, Stickman1);

    cout << centerText(hmWidth, "Stage One:") << endl;
    cout << hm1 << endl;
    cout << hm2 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm3 << endl;
    cout << hm4 << endl;
    cout << divider << endl;
    return 0;
}