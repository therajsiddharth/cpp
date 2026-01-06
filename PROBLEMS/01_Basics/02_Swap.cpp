#include <iostream>
using namespace std;

int main()
{
    //Using Extra Variable
     int a,b,temp;
    a=2, b=4;
    cout<< "The value of a before swapping is: "<<a <<endl;
    cout<< "The value of b before swapping is: "<<b <<endl;
    temp = a;
    a = b;
    b = temp;
    cout<< "The value of a after swapping is: "<<a <<endl;
    cout<< "The value of b after swapping is: "<<b <<endl;
    cout<<endl;
    
    //Using Mathematics
    int x=2, y=4;
    cout<< "The value of a before swapping is: "<<x <<endl;
    cout<< "The value of b before swapping is: "<<y <<endl;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<< "The value of a after swapping is: "<<x <<endl;
    cout<< "The value of b after swapping is: "<<y <<endl;

    //Using Functions

    //Using Pointers
    return 0;
} 
