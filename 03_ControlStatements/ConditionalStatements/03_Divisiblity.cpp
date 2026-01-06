#include<iostream>
using namespace std;
int main()
{
    //Ques1 : Take positive integer input and tell if it is divisible by 5.
    cout << "Ques1 : Take positive integer input and tell if it is divisible by 5." << endl;
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; //Terminate program immediately if input is invalid
        // Exit the program with an error code without further processing, faster than using else
    }

    if(num % 5 == 0)
    {
        cout<<num<<" is divisible by 5."<<endl;
    }
    else
    {
        cout<<num<<" is not divisible by 5."<<endl;
    }

    //Ques2 : Take positive integer input and tell if it is divisible by 5 and 3.
    cout<<"Ques2 : Take positive integer input and tell if it is divisible by 5 and 3."<<endl;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; //Terminate program immediately if input is invalid
        // Exit the program with an error code without further processing, faster than using else
    }
    if(num % 5 == 0 && num % 3 == 0)
    {
        cout<<num<<" is divisible by both 5 and 3."<<endl;
    }
    else
    {
        cout<<num<<" is not divisible by both 5 and 3."<<endl;
    }

    //Ques3 : Take positive integer input and tell if it is divisible by 5 or 3.
    cout<<"Ques3 : Take positive integer input and tell if it is divisible by 5 or 3."<<endl;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; //Terminate program immediately if input is invalid
        // Exit the program with an error code without further processing, faster than using else
    }
    if(num % 5 == 0 || num % 3 == 0)
    {
        cout<<num<<" is divisible by either 5 or 3."<<endl;
    }
    else
    {
        cout<<num<<" is not divisible by either 5 or 3."<<endl;
    }

    // Ques4 : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
    cout<<"Ques4 : Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15."<<endl;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; //Terminate program immediately if input is invalid
        // Exit the program with an error code without further processing, faster than using else
    }
    if((num % 5 == 0 || num % 3 == 0) && num % 15 != 0)
    {
        cout<<num<<" is divisible by either 5 or 3 but not divisible by 15."<<endl;
    }
    else
    {
        cout<<num<<" is not divisible by either 5 or 3 but not divisible by 15."<<endl;
    }

    return 0;
}