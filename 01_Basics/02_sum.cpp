#include <iostream>
using namespace std;
void printSum(int a, int b)
{
    cout << "The sum of " << a << " and " << b << " is " << (a + b) << endl;
}

int main(){
    //Method 1: Using variables
    int a = 10;
    int b = 20;
    int sum = a + b;
    cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    //Method 2.1: Using user input
    cout << "Enter 2 numbers to sum: ";
    int x, y;
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is " << (x + y) << endl;

    //Method 2.2: Using user input
    int num1, num2;
    cout << "Enter first number: "; 
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;

    //Method 3: Using direct values
    int sum2 = 10 + 20;
    cout << "The sum of 10 and 20 is " << sum2 << endl;

    //Method 4: Using direct values in output
    cout << "The sum of 10 and 20 is " << (10 + 20) << endl;

    //Method 5: Using function
    printSum(10, 20);
    return 0;
}