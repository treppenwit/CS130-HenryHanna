#include <iostream>

using namespace std;

int addTwo(int num1, int num2)
{
    return num1+num2;
}

int main(void)
{
    int a, b;
    cin >> a >> b;
    cout << addTwo(a, b) << endl;



    return 0;
}