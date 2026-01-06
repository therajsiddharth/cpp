//Ques : Take positive integer input and tell if it is even or odd
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

    if(num % 2 == 0)
    {
        cout<<num<<" is an even number."<<endl;
    }
    else
    {
        cout<<num<<" is an odd number."<<endl;
    }

    return 0;
}