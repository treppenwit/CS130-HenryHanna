#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// functions for the story, probably randomizers
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
 

int main()
{
    string name, nameLast, choice1;

    cout << centerText(100, "The wise shall inherit glory") << endl;
    cout << centerText(100, "But shame shall be the legacy of fools.") << endl;
    cout << centerText(100, "Proverbs 3:25") << endl;
    cout << "\n" << endl;
    cout << "Who is the nobody's name?   ";
    cin >> name >> nameLast;
    cout << "\n" << endl;
    
    cout << "You've awoken in a cloud of troublesome thought. You're mind is fuzzy and dull, you don't know where you are. It's dark and cramped." << endl;
    cout << "For whatever reason you might be in here, you feel it had to do with the night prior to this objectionable morning." << endl; 
    cout << "Do you get up? (type yes or no)" << endl;
    cin >> choice1;

    if (choice1 == "yes")
    {
        cout << "You move slightly, only to realize you're stuffed in a chimney. Why on Earth are you in a chimney?" << endl;
    }
    if (choice1 == "no")
    {
        
    }
    











    cin.ignore(100, '\n');
    cout << "You have completed ending #. (press enter to restart)\n";
    cin.get();
    cout << "Good bye... for now" << endl;
    return 0;
}