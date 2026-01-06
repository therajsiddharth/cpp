//Ques : Write a program to create a grading system using switch case.
#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    switch (percentage / 10)
    {
    case 10:
    case 9:
    case 8:
        cout << "Grade: Very Good" << endl;
        break;
    case 7:
    case 6:
        cout << "Grade: Good" << endl;
        break;
    case 5:
    case 4:
        cout << "Grade: Average" << endl;
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "Grade: Fail" << endl;
        break;
    default:
        cout << "Please enter a valid percentage between 0 and 100." << endl;
        break;
    }

    return 0;
}