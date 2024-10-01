#include <iostream>

using namespace std;

int main(void)
{
    while(true)
    {
        cout << "Cheese" << endl;

        cout << "No Cheese" << endl;

        char yes_no;
        cin >> yes_no;
        
        if( yes_no != 'y')
        {
            break;
        }

    }



    return 0;
}