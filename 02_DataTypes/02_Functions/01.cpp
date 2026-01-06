#include <iostream>
using namespace std;

//Function definition
void greet(){
    cout<< "Good Morning!"<<endl;
    cout<<"How are you?"<<endl;
}

void sum( int a, int b) //Formal Parameters - new variables
{
    cout <<a+b; //Here, 2 will be assigned to a & 8 will be assigned to b
}

int main() //Program starts
{
    greet(); //Function Call / invoke
    cout<<"Hey"<<endl;
    greet(); //Function Call can be done multiple times.

    sum(2,6); //Actual Parameters/ Pass by Value

    return 0; //used to end a function instantly.
}

/*
Main function cannot be called more than once.
Program will always starts with the main function.
Unlimited functions.
Void return nhi karta hai.
*/