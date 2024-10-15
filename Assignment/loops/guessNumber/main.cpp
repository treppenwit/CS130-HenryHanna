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
#include <ctime>

using namespace std;

int randNumber() {
    return rand() % 20 + 1;
}

int readNumber() {
    int read = 0;
    cout << "Enter a guess: ";
    cin >> read;
    return read;
}

int checkGuess(int guess, int numR) {
    if (guess == numR) {
        return 0; // Correct
    } else if (guess > numR) {
        return 2; // Too high
    } else {
        return -1; // Too low
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator
    char again;

    do {
        int numR = randNumber(); // Generate number once per round
        int guess, attempt;

        for (int i = 0; i < 5; i++) {
            guess = readNumber();
            attempt = checkGuess(guess, numR);

            if (attempt == -1) {
                cout << "Too low.\n" << endl;
            } else if (attempt == 2) {
                cout << "Too high.\n" << endl;
            } else if (attempt == 0) {
                cout << "You guessed the number!\n" << endl;
                break; // Exit guessing loop if guessed correctly
            }
        }

        cout << "The number was " << numR << ". Would you like to try again? (y = yes, n = no)" << endl;
        cin >> again;

    } while (again == 'y'); // Loop again if user wants to play

    cout << "Goodbye.\n";
    return 0; // End of main
}
