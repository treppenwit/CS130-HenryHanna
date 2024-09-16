#include <iostream>

using namespace std;

int addTwo(int num1, int num2)
{
    return num1+num2;
}

void printCard(void)
{
    string card = R"|======|\n|     |\n|     |\n|     |======|\n";
    cout << card << endl;
    return 0;
}
int main(void)
{
    int a, b;
    cin >> a >> b;
    cout << addTwo(a, b) << endl;
    cout << printCard << endl;


    return 0;
}