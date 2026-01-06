#include <iostream>
using namespace std;
int main()
{
    //User Input
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //Print: 4 * 1 = 4
    cout << "Table of "<<n <<":"<<endl;
    for ( int i=1;i<=10;i++){
        cout <<n << " * " << i <<" = "<<i*n <<endl;
    }
    return 0;
}