#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    string units;





    cout << "How would you like units displayed? (feet or meters)" << endl;
    cin >> units;
    if (units == "feet"){
        cout << "You have entered feet" << endl;
    }
    if (units == "meters"){
        cout << "You have entered meters" << endl;
        }
    return 0;
}