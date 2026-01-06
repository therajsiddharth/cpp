#include<iostream>
using namespace std;

void greet(){
    cout<<"Hi"<<" You are inside greet()"<<endl;
}

void fun(){
    cout<<"Now, You are inside fun()"<<endl;
    greet();
}
int main()
{
    cout << "Hello World!" << endl;
    cout<<"You are in Main()"<<endl;
    greet();
    fun();
    return 0;
}