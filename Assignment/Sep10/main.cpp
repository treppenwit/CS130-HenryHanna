#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;
int main()
{
    srand(time(NULL));
    int random_number = rand()%50;

    cout << "2^31 = " << pow(2, 31) << endl;
    cout << "Max random number: " << RAND_MAX << endl;
    cout << "Random number: " << random_number << endl;

    cout << setw(random_number-8) << setfill(' ') << "MY" << setw(random_number+12) << "FEET" << setw(random_number-42) << " " << endl;

    printf("Printing characters:\tc %c\n", 65);
    printf("Column Width & Right Justification: %10s\n", "Hi");

    return 0;
}