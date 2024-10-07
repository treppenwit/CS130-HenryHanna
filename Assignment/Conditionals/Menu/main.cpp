/*
Name: Henry Hanna
CS130
10/04/24
*/
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

template<class T>
T larger(T val1, T val2, T val3, T val4, T val5) {
    T large = val1;
    if (val1 < val2)
    {
        large = val2;
    }
    if (val2 < val3)
    {
        large = val3;
    }
    if (val3 < val4)
    {
        large = val4;
    }
    if (val4 < val5)
    {
        large = val5;
    }
    return large;
}

template<class T>
T smaller(T val1, T val2, T val3, T val4, T val5) {
    T small = val1;
    if (val1 > val2)
    {
        small = val2;
    }
    if (val2 > val3)
    {
        small = val3;
    }
    if (val3 > val4)
    {
        small = val4;
    }
    if (val4 > val5)
    {
        small = val5;
    }
    return small;
}


template<class T>
string sum5(T val1, T val2, T val3, T val4, T val5) {
    string signResult;
    T sum = val1 + val2 + val3 + val4 + val5;
    if (sum > 0)
    {
        signResult = "positive";
    }
    if (sum < 0)
    {
        signResult = "negative";
    }
    if (sum == 0)
    {
        signResult = "zero";
    }
    
    return signResult;
}

void test(){
    assert(larger(1, 2, 3, 4, 5) == 5);
    assert(larger(11, 72, 21, -4, 15) == 72);
    assert(larger(0, -1, -14, -5, -6) == 0);

    assert(smaller(2, 6, 9, 7, 12) == 2);
    assert(smaller(2, 71, -2, 1, -3) == -3);
    assert(smaller(0, 61, 1, 8, 12) == 0);

    assert(sum5(1, 2, 3, 4, 5) == "positive");
    assert(sum5(9, 7, -40, 1, 2) == "negative");
    assert(sum5(-1, 1, 2, -5, 3) == "zero");
    printf("%s\n", "all test cases passed...");
}

void clearScreen() {
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}


int getMenuOption() {
    // A Smiple CLI-based calculator
    int option;
    cout << "Enter one of the following menu options: [1-4]\n"
        << "1 -> Larger\n"
        << "2 -> Smaller\n"
        << "3 -> Sign of Sum of Five\n"
        << "4 -> Quit\n";
    cin >> option;
    return option;
}

bool program() {
    string name;
    float n1, n2, n3, n4, n5;
    int option;
    option = getMenuOption();

    cout << "Hello " << name << ", please enter five numbers separated by spaces: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    switch(option) {
        case 1:
        {
            cout << "The largest number of " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", and " << n5 << " is " << larger<float>(n1, n2, n3, n4, n5) << endl;
            break; // terminate switch
        }
        case 2:
        {
            cout << "The smallest number of " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", and " << n5 << " is " << smaller<float>(n1, n2, n3, n4, n5) << endl;
            break;
        }
        case 3:
        {
            cout << "The sum of " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << ", and " << n5 << " is " << sum5<float>(n1, n2, n3, n4, n5) << endl;
            break;
        }
        case 4:
        {
        
            return false;
        }
    }
    return true;
}

int main(int argc, char* argv[]) {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    if(argc == 2 && string(argv[1]) == "test") {
        test();
        exit(EXIT_SUCCESS); // exit the program
    }
    else {
        // this loop will keep the program running until user wants to quit
        while (true) {
            if (!program()) // call program
                break; // break loop if program returned false
            cin.ignore(100, '\n');
            cout << "Enter to continue...";
            cin.get();
            clearScreen();
        }
    }
}