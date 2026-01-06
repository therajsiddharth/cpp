/*
Ques : Given a point (x, y), write a program to find
out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd
Quadrant, 4th Quadrant, on the x-axis, y-axis or at
the origin, viz. (O, O).
or
Ques : Take input coordinates of a point and determine its quadrant.
*/
#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cout << "Enter the coordinates of the point (x y): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
    {
        cout << "The point lies in the 1st Quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point lies in the 2nd Quadrant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point lies in the 3rd Quadrant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point lies in the 4th Quadrant." << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "The point lies on the Y-axis." << endl;
    }
    else if (y == 0 && x != 0)
    {
        cout << "The point lies on the X-axis." << endl;
    }
    else
    {
        cout << "The point is at the Origin." << endl;
    }

    return 0;
}