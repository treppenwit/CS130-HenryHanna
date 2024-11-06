#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>  // For rand()
#include <ctime>    // For time()

using namespace std;

// Function to center text on the screen
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

// Function to display a choice prompt and get player's input
string getChoice(const string& prompt, const string& option1, const string& option2)
{
    string choice;
    cout << prompt << endl;
    cout << "1. " << option1 << endl;
    cout << "2. " << option2 << endl;
    cin >> choice;
    return choice;
}

// Function to play the game and return the ending type
int playGame() {
    string name, nameLast, choice1, choice2;

    cout << centerText(100, "The wise shall inherit glory") << endl;
    cout << centerText(100, "But shame shall be the legacy of fools.") << endl;
    cout << centerText(100, "Proverbs 3:25") << endl;
    cout << "\n" << endl;
    cout << "Who is the nobody's name?   ";
    cin >> name >> nameLast;
    cout << "\n" << endl;

    cout << "You've awoken in a cloud of troublesome thought. Your mind is fuzzy and dull, you don't know where you are. It's dark and cramped." << endl;
    cout << "For whatever reason you might be in here, you feel it had to do with the night prior to this objectionable morning." << endl;
    cout << "Do you get up? (type yes or no)" << endl;
    cin >> choice1;

    if (choice1 == "yes") {
        cout << "You move slightly, only to realize you're stuffed in a chimney. Why on Earth are you in a chimney?" << endl;
        cout << "The bottom of the chimney is shut. You begin to climb the charcoal-covered walls. Light seeps into this squarish cavern." << endl;
        cout << "As you reach the top of the chimney the low sun over the horizon blinds you. While climbing out you think about how" << endl;
        cout << "you will get down from this roof. Do you jump down or do you use your clothes to climb down? (type jump or climb)" << endl;
        cin >> choice2;

        if (choice2 == "jump") {
            cout << "You leap off the roof, feeling the wind rush past you. You land awkwardly and take a tumble.\n";
            cout << "You’ve sprained your ankle! It hurts but you manage to stand.\n";
            cout << "Do you try to keep moving or rest for a while? (type move or rest)" << endl;
            string choice3;
            cin >> choice3;

            if (choice3 == "move") {
                cout << "You grit your teeth and push forward, limping as you go.\n";
                // End the game with a "bad" ending due to injury
                cout << "You eventually collapse from exhaustion. The End.\n";
                return 1;  // End type 1
            }
            else {
                cout << "You sit and catch your breath, taking a moment to assess your situation.\n";
                // End the game with a "neutral" ending
                cout << "You rest and regain your strength. The End.\n";
                return 2;  // End type 2
            }
        }
        else if (choice2 == "climb") {
            cout << "You carefully use your clothes to descend the roof. It's a little tricky, but you manage.\n";
            cout << "Once you reach the ground, you take in your surroundings.\n";
            // End the game with a "neutral" ending
            cout << "You move forward with caution and keep your eyes peeled for danger. The End.\n";
            return 3;  // End type 3
        }
    }
    else if (choice1 == "no") {
        // Game logic for choosing "no"
        cout << "You decide to stay in the dark and rest. Eventually, you fall back asleep.\n";
        cout << "When you wake up, things feel even worse. The End.\n";
        return 4;  // End type 4
    }

    // Default case if no ending reached
    cout << "You have reached a placeholder ending. The End.\n";
    return 5;  // Default ending type
}

int main() {
    srand(time(0));  // Seed random number generator for randomness in events

    int gameEnd = 0;
    do {
        // Play the game and get the ending type
        gameEnd = playGame();

        // Check which ending the player reached
        cout << "You have completed ending #" << gameEnd << ".\n";
        cout << "Do you want to restart the game? (yes/no): ";
        string restartChoice;
        cin >> restartChoice;

        if (restartChoice == "no") {
            cout << "Goodbye... for now!" << endl;
            break;  // Exit the loop, ending the game
        }
        else if (restartChoice != "yes") {
            cout << "Invalid input. Please enter 'yes' to restart or 'no' to exit." << endl;
        }

    } while (true);  // Game loop continues until player chooses "no" to exit

    return 0;
}
