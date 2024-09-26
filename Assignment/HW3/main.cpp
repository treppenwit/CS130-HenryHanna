/*
Name: Henry Hanna
CS130
Calculator
*/
#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

template <typename T>
T divide(T a, T b) {
    if (b == 0) {
        throw invalid_argument("Division by zero");
    }
    return a / b;
}


template <typename T>
T power(T base, T exponent) {
    return pow(base, exponent);
}

template <typename T>
T square_root(T number) {
    return sqrt(number);
}

template <typename T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

void test_functions() 
{
    // Test cases for each function
    cout << "Testing Functions:" << endl;

    // Test addition
    cout << "Add (5, 3): " << add(5, 3) << endl;  // 8
    cout << "Add (5.5, 3.2): " << add(5.5, 3.2) << endl; // 8.7

    // Test subtraction
    cout << "Subtract (5, 3): " << subtract(5, 3) << endl; // 2
    cout << "Subtract (5.5, 3.2): " << subtract(5.5, 3.2) << endl; // 2.3

    // Test multiplication
    cout << "Multiply (5, 3): " << multiply(5, 3) << endl; // 15
    cout << "Multiply (5.5, 3.2): " << multiply(5.5, 3.2) << endl; // 17.6

    // Test division
    cout << "Divide (6, 3): " << divide(6, 3) << endl; // 2
    cout << "Divide (5.5, 2): " << divide(5.5, 2.0) << endl; // 2.75

    // Test modulus
    cout << "Remainder (5, 3): " << remainder(5, 3) << endl; // 2

    // Test power
    cout << "Power (2, 3): " << power(2, 3) << endl; // 8
    cout << "Power (2.5, 2): " << power(2.5, 2.0) << endl; // 6.25

    // Test square root
    cout << "Square root (9): " << square_root(9) << endl; // 3
    cout << "Square root (2.25): " << square_root(2.25) << endl; // 1.5

    
    cout << "Larger (5, 3): " << larger(5, 3) << endl; // 5
    cout << "Larger (5.5, 3.2): " << larger(5.5, 3.2) << endl; // 5.5
}

int main() 
{
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Results:" << endl;
    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Division: " << divide(num1, num2) << endl;
    cout << "Remainder: " << remainder(static_cast<int>(num1), static_cast<int>(num2)) << endl; 
    cout << "Power: " << power(num1, num2) << endl;
    cout << "Square Root of first number: " << square_root(num1) << endl;
    cout << "Larger of two numbers: " << larger(num1, num2) << endl;

    // Test the functions
    test_functions();
    
    return 0;
}