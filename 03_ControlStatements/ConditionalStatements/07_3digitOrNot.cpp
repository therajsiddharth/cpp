//Ques : Take positive integer input and tell if it is a three digit number or not.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; //Terminate program immediately if input is invalid
        // Exit the program with an error code without further processing, faster than using else
    }

    if(num >= 100 && num <= 999)
    {
        cout<<num<<" is a three digit number."<<endl;
    }
    else
    {
        cout<<num<<" is not a three digit number."<<endl;
    }

    return 0;
}