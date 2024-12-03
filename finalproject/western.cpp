#include <iostream>
<<<<<<< HEAD
#include <cstdlib>
#include <ctime>
using namespace std;

// Utility function to center text (no changes)
string centerText(int width, string text) {
    int padding = (width - text.length()) / 2;
    string centered = string(padding, ' ') + text + string(padding, ' ');
    return centered;
}

// Function to handle choices with random outcomes
string getChoice(string prompt, string option1, string option2) {
=======
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
>>>>>>> 5312bc9283ef371a05341ed060b0ae24634022c8
    string choice;
    cout << prompt << endl;
    cout << "1. " << option1 << endl;
    cout << "2. " << option2 << endl;
    cin >> choice;
    return choice;
}
<<<<<<< HEAD
=======

// Function to play the game and return the ending type
int playGame() {
    string name, nameLast, choice1, choice2;
>>>>>>> 5312bc9283ef371a05341ed060b0ae24634022c8

// Random event generator function
int randomEvent(int numChoices) {
    return rand() % numChoices;  // Generates a random number from 0 to numChoices - 1
}

int playGame() {
    srand(time(0));  // Seed the random number generator
    string name, lastName, choice;

    // Display intro
    cout << centerText(100, "The wise shall inherit glory") << endl;
    cout << centerText(100, "But shame shall be the legacy of fools.") << endl;
    cout << centerText(100, "Proverbs 3:25") << endl;
<<<<<<< HEAD
    cout << "\nWho is the nobody's name? ";
    cin >> name >> lastName;

    // Start of the game
    cout << "\nYou’ve awoken in a cloud of troublesome thought. Your mind is fuzzy and dull, you don't know where you are. It's dark and cramped.\n";
    choice = getChoice("Do you get up?", "Yes", "No");

    if (choice == "1") {  // "Yes" branch
        cout << "You realize you're stuffed in a chimney. The bottom is shut, so you climb the soot-covered walls...\n";
        cout << "At the top, sunlight blinds you.\n";
        choice = getChoice("Do you jump down or use your clothes to climb?", "Jump", "Climb");

        if (choice == "1") {  // Jump branch
            cout << "You leap down, but the ground gives way, and you fall into a deep pit. Everything goes dark.\n";
            cout << "When you wake up, you find yourself in a strange, shadowy realm. The air feels heavy, and distant whispers surround you. You realize this might be the afterlife...\n";
            choice = getChoice("Do you explore the underworld or call out for help?", "Explore", "Call");

            if (choice == "1") {  // Explore branch
                cout << "You venture deeper into the underworld, encountering strange creatures and forgotten souls. You find a mysterious gate. Do you try to open it or search for another way? (open/search): ";
                cin >> choice;

                if (choice == "1") {  // Open gate branch
                    cout << "The gate opens, revealing a path to redemption. You feel a surge of hope.\n";
                    cout << "Ending: *Path of Redemption*\n";
                    return 15;
                } else {  // Search branch
                    cout << "As you search, you uncover lost memories of your past life. The journey helps you make peace with your fate.\n";
                    cout << "Ending: *Guide of the Forgotten*\n";
                    return 16;
                }
            } else if (choice == "2") {  // Call out branch
                cout << "Your voice echoes, and a figure emerges from the shadows. It offers to guide you but demands something in return.\n";
                choice = getChoice("Do you agree to the deal or refuse?", "Agree", "Refuse");

                if (choice == "1") {  // Agree branch
                    cout << "The figure leads you to a portal back to the living world, but at a cost: you forget your identity.\n";
                    cout << "Ending: *Rebirth of the Unknown*\n";
                    return 17;
                } else {  // Refuse branch
                    cout << "You refuse, and the figure vanishes. Left alone, you wander aimlessly in the underworld.\n";
                    cout << "Ending: *Eternal Wanderer*\n";
                    return 18;
                }
            }
        } else if (choice == "2") {  // Climb branch
            cout << "You carefully descend. On the ground, you see a desert to the left and a town to the right.\n";
            choice = getChoice("Where do you go?", "Desert", "Town");

            if (choice == "1") {  // Desert branch
                cout << "The blazing sun scorches you as you traverse the desert. You see some shade in the distance.\n";
                choice = getChoice("Do you approach?", "Shade", "Wander");

                if (choice == "1") {  // Shade branch
                    cout << "You find relief under a lone tree, collapsing in exhaustion. As you drift off to sleep, strange noises awaken you.\n";
                    cout << "You realize you’re tied up in a dark tent surrounded by murmuring figures. Cannibal savages have taken you captive.\n";
                    choice = getChoice("Do you try to untie yourself or call for help?", "Untie", "Call");

                    if (choice == "1") {  // Untie branch
                        cout << "You manage to loosen the ropes and escape the tent, but the tribe quickly notices your absence.\n";
                        cout << "Running under the moonlit desert sky, your exhaustion catches up, and you collapse. You awaken again, but this time on their dinner table.\n";
                        cout << "Ending: *Feast of the Foolish*\n";
                        return 19;
                    } else {  // Call branch
                        cout << "You call for help, but the tribe laughs at your desperation. They see no reason to grant mercy.\n";
                        cout << "The last thing you hear is their chant before everything fades to black.\n";
                        cout << "Ending: *Echoes of Despair*\n";
                        return 20;
                    }
                } else if (choice == "2") {  // Wander branch
                    cout << "You choose to keep walking under the unforgiving sun. The heat saps your energy, but you spot something in the distance: a small structure.\n";
                    choice = getChoice("Do you approach the structure or ignore it?", "Approach", "Ignore");

                    if (choice == "1") {  // Approach branch
                        cout << "The structure turns out to be an abandoned hut. Inside, you find remnants of a long-lost traveler’s belongings.\n";
                        cout << "Among them is a journal filled with cryptic notes about an ancient treasure. Desperate for purpose, you decide to follow the clues.\n";
                        cout << "After days of searching, the trail leads you to nothing but shifting sands. Exhausted and broken, you succumb to the desert.\n";
                        cout << "Ending: *Chasing Mirages*\n";
                        return 21;
                    } else {  // Ignore branch
                        cout << "You ignore the structure, fearing it might be a mirage or a trap. You continue wandering aimlessly.\n";
                        cout << "As days pass, hunger and thirst consume you. You fall to your knees, staring at the endless dunes, knowing no one will find you.\n";
                        cout << "In your final moments, you wonder if the structure could have saved you.\n";
                        cout << "Ending: *The Lonely Horizon*\n";
                        return 22;
                    }
                }
            } else if (choice == "2") {  // "Town" branch
                // New random event added here
                int eventChoice = randomEvent(2);
                if (eventChoice == 0) {  // Train event
                    cout << "You arrive at the bustling town square. Where would you like to go first?\n";
                    choice = getChoice("Choose your destination:", "Visit the train station", "Explore a mysterious stranger's shop");

                    if (choice == "1") {  // Train Station branch
                        cout << "At the train station, you hear whispers of an old train carrying untold riches.\n";
                        choice = getChoice("Do you investigate further or move on?", "Investigate the train", "Ignore the rumors");

                        if (choice == "1") {
                            cout << "You sneak aboard the mysterious train as it departs. Its interior is lavish but eerily quiet.\n";
                            choice = getChoice("Do you search for treasure or find the conductor?", "Search for treasure", "Find the conductor");

                            if (choice == "1") {
                                cout << "You find a vault filled with gold, but as you touch it, the train vanishes, leaving you stranded in a void.\n";
                                cout << "Ending: *Lost in Greed*\n";
                                return 23;
                            } else {
                                cout << "You meet the conductor, who reveals the train’s curse: it traps the greedy. You escape empty-handed but alive.\n";
                                cout << "Ending: *Wisdom of Restraint*\n";
                                return 24;
                            }
                        } else {
                            cout << "You ignore the rumors and live a quiet life, but you always wonder what could have been.\n";
                            cout << "Ending: *The Path Not Taken*\n";
                            return 25;
                        }
                    }
                } else {  // Stranger's shop event
                    cout << "You encounter a mysterious figure in the town square who offers you a strange artifact.\n";
                    choice = getChoice("Do you accept the artifact or refuse?", "Accept", "Refuse");

                    if (choice == "1") {
                        cout << "The artifact grants you strange visions of the future. You gain great knowledge but lose your sense of self.\n";
                        cout << "Ending: *The Seer of Forgotten Paths*\n";
                        return 33;
                    } else {
                        cout << "You refuse the artifact, but you soon realize the town harbors dark secrets. As night falls, you're never seen again.\n";
                        cout << "Ending: *Vanished in the Shadows*\n";
                        return 34;
                    }
                }
            }
        }
    } else if (choice == "2") {  // "No" branch
        cout << "You stay in the dark, drifting in and out of sleep, when you hear voices nearby. Suddenly, the chimney cover opens, revealing a man and a woman looking down at you.\n";
        cout << "It turns out this is their house, and you recognize the woman as someone you had an affair with. The man furiously shouts at you, 'What are you doing here?' You scramble out of the chimney.\n";
        cout << "The man kicks you out of the house, but to your surprise, the woman follows you. 'I'm coming with you,' she says. 'We can't stay here anymore.'\n";

        choice = getChoice("What do you do next?", "Take the train to somewhere far away", "Search for gold in the mountains");

        if (choice == "1") {  // Train escape
            cout << "You and the woman board a train headed west, far from the prying eyes of the husband and the past.\n";
            choice = getChoice("Do you live quietly in the new town or start over as adventurers?", "Settle down in peace", "Live as adventurers");

            if (choice == "1") {
                cout << "You arrive in a distant town and live quietly with the woman, leaving the past behind. Over time, you grow content with your simple life.\n";
                cout << "Ending: *A Quiet Redemption*\n";
                return 29;
            } else {
                cout << "You and the woman decide to live boldly, exploring the unknown together. Your love grows as you face challenges side by side.\n";
                cout << "Ending: *Adventurous Hearts*\n";
                return 30;
            }
        } else if (choice == "2") {  // Gold hunt
            cout << "You and the woman journey to the mountains in search of gold, hoping to start a new life with riches.\n";
            choice = getChoice("Do you keep climbing to find gold or turn back to safety?", "Keep climbing", "Turn back");

            if (choice == "1") {
                cout << "You find a vein of gold deep in the mountains, but an avalanche traps you both. Your greed costs you your lives.\n";
                cout << "Ending: *Buried in Greed*\n";
                return 31;
            } else {
                cout << "You turn back before it's too late. Though you don’t find gold, you and the woman survive and cherish the experience.\n";
                cout << "Ending: *Love Over Gold*\n";
                return 32;
            }
        }
    }

    // Fallback in case of error
    cout << "Something went wrong. The End.\n";
    return 0;
}



int main() {
    srand(time(0));  // Seed random number generator

    string endingsAchieved[32]; // Array to store up to 32 endings (updated size to match all endings)
    int endingCount = 0;        // Tracks how many endings have been achieved

    int gameEnd = 0;
    do {
        gameEnd = playGame();  // Play the game and get the ending type

        // Store the ending description based on the ending ID
        switch (gameEnd) {
            case 15: endingsAchieved[endingCount++] = "Ending: *Path of Redemption*"; break;
            case 16: endingsAchieved[endingCount++] = "Ending: *Guide of the Forgotten*"; break;
            case 17: endingsAchieved[endingCount++] = "Ending: *Rebirth of the Unknown*"; break;
            case 18: endingsAchieved[endingCount++] = "Ending: *Eternal Wanderer*"; break;
            case 19: endingsAchieved[endingCount++] = "Ending: *Feast of the Foolish*"; break;
            case 20: endingsAchieved[endingCount++] = "Ending: *Echoes of Despair*"; break;
            case 21: endingsAchieved[endingCount++] = "Ending: *Chasing Mirages*"; break;
            case 22: endingsAchieved[endingCount++] = "Ending: *The Lonely Horizon*"; break;
            case 23: endingsAchieved[endingCount++] = "Ending: *Lost in Greed*"; break;
            case 24: endingsAchieved[endingCount++] = "Ending: *Wisdom of Restraint*"; break;
            case 25: endingsAchieved[endingCount++] = "Ending: *The Path Not Taken*"; break;
            case 26: endingsAchieved[endingCount++] = "Ending: *Riches and Ruin*"; break;
            case 27: endingsAchieved[endingCount++] = "Ending: *The Wise Wanderer*"; break;
            case 28: endingsAchieved[endingCount++] = "Ending: *The Lonely Immortal*"; break;
            case 29: endingsAchieved[endingCount++] = "Ending: *A Quiet Redemption*"; break;
            case 30: endingsAchieved[endingCount++] = "Ending: *Adventurous Hearts*"; break;
            case 31: endingsAchieved[endingCount++] = "Ending: *Buried in Greed*"; break;
            case 32: endingsAchieved[endingCount++] = "Ending: *Love Over Gold*"; break;
            default: break;
        }

        // Ask the player if they want to restart
        cout << "You completed ending #" << gameEnd << ".\n";
        cout << "Do you want to restart the game? (yes/no): ";
        string restartChoice;
        cin >> restartChoice;

        if (restartChoice == "no") {
            cout << "\nGame Over. Here's a summary of all the endings you achieved:\n";
            for (int i = 0; i < endingCount; i++) {
                cout << "- " << endingsAchieved[i] << endl;
            }
            cout << "Thanks for playing!\n";
            break;
        } else if (restartChoice != "yes") {
            cout << "Invalid input. Please enter 'yes' to restart or 'no' to exit.\n";
        }
    } while (true);

    return 0;
}
=======
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
>>>>>>> 5312bc9283ef371a05341ed060b0ae24634022c8
