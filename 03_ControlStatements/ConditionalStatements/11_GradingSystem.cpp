/*
Ques : Take input percentage of a student and
print the Grade according to marks:
1) 81-100 very Good
2) 61-80 Good
3) 41-60 Average
4) Fail
*/
#include<iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter the percentage of the student: ";
    cin >> percentage;

    if (percentage >= 81 && percentage <= 100)
    {
        cout << "Grade: Very Good" << endl;
    }
    else if (percentage >= 61 && percentage <= 80)
    {
        cout << "Grade: Good" << endl;
    }
    else if (percentage >= 41 && percentage <= 60)
    {
        cout << "Grade: Average" << endl;
    }
    else if (percentage >= 0 && percentage <= 40)
    {
        cout << "Grade: Fail" << endl;
    }
    else
    {
        cout << "Please enter a valid percentage between 0 and 100." << endl;
    }

    return 0;
}