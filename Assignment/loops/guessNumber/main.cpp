/* 
Henry Hanna
10/14/24
CS130

Algorithm
1. Greet user
2. Generate random number
3. Have user guess the number and say if it was guessed
4. Display stats
*/
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int randNumber () {
    int numR = rand() % 20 + 1;
    return numR;

}

int readNumber () {
    int read = 0;
    cout << "Enter a guess: ";
    cin >> read;
    return read;
}

int checkGuess (int guess, int numR) {
    int attempt;
    if (guess == numR) {
        attempt = 0;
    }
    if (guess > numR) {
        attempt = 2;
    }
    if (guess < numR) {
        attempt = -1;
    }
    return attempt;
}

int main () 
{
    int numR, guess, attempt;

    for (int x = 0; x < 1; x++){
        for (int i = 1; i < 6; i++){
            numR = randNumber();

            guess = readNumber();

            attempt = checkGuess(guess, numR);

            if (attempt == -1) {
                cout << "Too low.\n" << endl;
                i++;
            }
            if (attempt == 2) {
                cout << "Too high.\n" << endl;
                i++;
            }
            if (attempt == 0) {
                cout << "You guessed the number.\n" << endl;
                break;
            }
        }
            char again;
            cout << "The number was " << numR << ". Would you like to try again? (y = yes, n = no)" << endl;
            cin >> again;
            if (again = 'y'){
                x++;
            } else {
                cout << "hit enter to run again.\n";
                cin.get();
                getchar();
            }
        
        cout << "goodbye.\n";
        getchar();
        cin.get();
        return 0;
    }


    return 0;
}