//HW : Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main()
{
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter)
    {
        cout << "The area of the rectangle is greater than its perimeter." << endl;
    }
    else if (area < perimeter)
    {
        cout << "The area of the rectangle is less than its perimeter." << endl;
    }
    else
    {
        cout << "The area of the rectangle is equal to its perimeter." << endl;
    }

    return 0;
}