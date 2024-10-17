#include <iostream>

using namespace std;

int main(void)
{
    double grades[10] = [90, 82, 56, 87, 90, 91, 26, 54, 89, 42, 74];

    cout << "First grade in array grades: " << grades[0] << endl;
    cout << "Address of first grade in array grades: " << &grades[0] << endl;

    for(int i=0; i<10; i++)
    {
        cout << grades[i] << ", ";
    }





    return 0;
}