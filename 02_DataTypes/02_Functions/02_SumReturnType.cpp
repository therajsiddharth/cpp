//Return Type

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main (){
    cout<<sum(6,8)<<endl;

    int x,y;
    cout<<"Enter num1: "<<endl;
    cin>>x;
    cout<<"Enter num2: "<<endl;
    cin>>y;

    cout<<sum(x,y);
    return 0;
}

