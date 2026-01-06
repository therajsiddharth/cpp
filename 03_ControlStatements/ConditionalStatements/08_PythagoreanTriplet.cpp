//Ques : Take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter the lengths of the three sides: ";
    cin >> a >> b >> c;

    // Check the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "The lengths can form a triangle." << endl;
    }
    else
    {
        cout << "The lengths cannot form a triangle." << endl;
    }

    return 0;
}