/* 
name: Henry Hanna
class: cs130
date: 09/17/24
hw3
*/
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

using namespace std;

template <class T1>
T1 add2(T1 a, T1 b);

int add2 (int, int);
double add2 (double a, double b);

int main(void)
{
    int a, b, answer;

    answer = add2<int>(a,b);

    printf("%f + %f = %f\n", a, b, answer);
	return 0;
}

template <class T1>
T1 add2(T1 a, T1 b)
{
    return a+b;
}
int add2 (int, int)
{
    return 
}