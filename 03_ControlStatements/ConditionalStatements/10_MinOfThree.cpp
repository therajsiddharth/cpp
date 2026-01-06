//Ques : If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include<iostream>
using namespace std;
int main()
{
    int ramAge, shyamAge, ajayAge;
    cout << "Enter the ages of Ram, Shyam and Ajay: ";
    cin >> ramAge >> shyamAge >> ajayAge;

    if (ramAge <= shyamAge && ramAge <= ajayAge)
    {
        cout << "Ram is the youngest." << endl;
    }
    else if (shyamAge <= ramAge && shyamAge <= ajayAge)
    {
        cout << "Shyam is the youngest." << endl;
    }
    else
    {
        cout << "Ajay is the youngest." << endl;
    }

    return 0;
}