/*
Ques : Write a program to create a calculator that performs basic arithmetic operations 
(add,subtract, multiply and divide) using switch case.
The calculator should input two numbers and an operator from user.
or
Ques : Write a program to create a simple calculator using switch case.
*/
#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Error: Invalid operator." << endl;
        break;
    }

    return 0;
}