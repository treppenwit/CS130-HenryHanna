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
    cout << centerText(100, "Welcome to Hangman!") << endl;

    string Name;
    cout << "Enter your name: "; 
    getline(cin, Name);

    cout << "Hello " << Name << ", any last words?" << endl;








    return 0;
}