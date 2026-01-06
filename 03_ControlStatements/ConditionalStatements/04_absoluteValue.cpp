// Ques : Take integer input and print the absolute value of that integer
#include <iostream>
using namespace std;
int main()
{
    // Method 1 >> Best approach
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0)
    {
        num = -num; // Convert to positive
    }

    cout << "The absolute value is: " << num << endl;

    // Method 2 >> Using if-else
    /*
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (num >= 0){
        cout << "The absolute value is: " << num << endl;
    }
    else{
        cout << "The absolute value is: " << -num << endl;
    }
    */

    // Method 3 >> Ternary Operator
    /*
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The absolute value is: " << (num >= 0 ? num : -num) << endl;
    */

    // Method 4 >> Math library function
    /*
    #include <cmath>
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "The absolute value is: " << abs(num) << endl;
    */

    // Method 5 >> Wrong approach but still works
    /*
    {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 0)
    {
        num = -num; // Convert to positive
    }

    cout << "The absolute value is: " << num << endl;

    return 0;
}
    */

    return 0;
}
