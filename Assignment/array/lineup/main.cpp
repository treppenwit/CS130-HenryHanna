/*
Programmer name: Henry Hanna
Date: 10/27/24
Class: CS130
*/

#include <iostream>
#include <strings.h>

using namespace std;


bool namefunction(int N, string names[]) {
    for (int i = 0; i < N; i++) {
        cin >> names[i];
        
        if (names[i].length() < 2 || names[i].length() > 12) {
            cout << "NEITHER" << endl;
            return false;
        }
    }
    return true;
}

int main(){
    int N;

    cin >> N;
       if (N < 2 || N > 20) {
        cout << "NEITHER" << endl;
        return 0;
    }

    string names[20];
    if (!namefunction(N, names)) {
        return 0; 
    }

    bool increasing = true, decreasing = true;

    for (int i = 1; i < N; i++) {
        if (names[i] > names[i - 1]) decreasing = false;
        if (names[i] < names[i - 1]) increasing = false;
    }

    if (increasing) cout << "INCREASING" << endl;
    else if (decreasing) cout << "DECREASING" << endl;
    else cout << "NEITHER" << endl;

    return 0;
}

