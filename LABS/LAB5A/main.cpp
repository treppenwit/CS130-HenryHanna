/*
    Loops Lab
    Updated By: Henry Hanna
    CSCI 130
    Date: 10/08/24

    Program prints geometric shapes of given height with * using loops
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


void printTriangle(int height) {
    //Function takes height as an argument to print the triangle
    //of that height with *
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = 1; col<=row; col++)
            cout << "* ";
        row += 1;
        cout << endl;
    }
}


void printFlippedTriangle(int height) {
    /* 
    Implement the function that takes height as an argument
    and prints a triangle with * of given height.
    Triangle of height 5, e.g., should look like the following.
    * * * * *
    * * * *
    * * *
    * *
    *
    
    */
    // FIXME3 ...
    int row = 1;
    // row
    while (row <= height) {
        // column
        for(int col = height; col>=row; col--)
            cout << "* ";
        row += 1;
        cout << endl;
    } 
}


/*  
FIXME4
Design and implement a function that takes an integer as height and
prints square of the given height with *.
Square of height 5, e.g., would look like the following.

*  *  *  *  *  
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   
*  *  *  *  *   

*/

void printSquare(int height) {

    for(int row = 0; row < height ; row++){
        for(int col = 0; col < height ; col++){
            cout << "*  ";
        }
        cout << endl;
    }
}

// function clears the screen system call
// NOTE: system call is not a security best pracice!
void clearScreen() {
    // use "cls" in windows and "clear" command in Mac and Linux
    #ifdef _WIN32
        system("clS");
    #else
        system("clear");
    #endif
}

int main(int argc, char* argv[]) {
        // FIXME5 add a loop to make the program to continue to run until the user wants to quit
        // FIXME6 call clearScreen function to clear the screen for each round of the loop
    int height;
    char ans;
    do {
        clearScreen();
        cout << "Program prints geometric shapes of given height with *\n";
        cout << "Please enter the height of the shape: ";
        cin >> height;
        // call printTriangle function passing user entered height
        printTriangle(height);
        
        // FIXME7
        // Call printFlippedTriangle passing proper argument
        // Manually test the function
        printFlippedTriangle(height);
        // FIXME6
        // Call the function defined in FIXME4 passing proper argument
        // Manually test the function
        printSquare(height);
        // FIXME9
        // prompt user to enter y/Y to continue anything else to quit
        cout << "Press y to restart: " << endl;
        cin >> ans;
        // FIXME10
        // Use conditional statements to break the loop or continue the loop
} while (ans == 'y' || ans == 'Y');
    return 0;
}