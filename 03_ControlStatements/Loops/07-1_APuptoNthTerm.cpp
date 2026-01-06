#include <iostream>
using namespace std;
int main(){
    //AP = 1,3,5,7...n
    //nth term = a + (n-1)d >> a=1, d=2
    //n = 1+(n-1)2 = 2n - 1

    //Method 1: Using AP formula
    int n;
    cout<<"Enter the nth term of AP = 1,3,5,7...n : ";
    cin>>n;

    for(int i=1; i<=(2*n-1); i+=2){
        cout << i << " ";
    }
    
    //Method 2: using extra variable a and keeping i only for the iterations (no of rounds)
    int m;
    cout<<"Enter m : ";
    cin>>m;

    //AP = 4,7,10,13...n
    int a = 4;
    for( int i=1; i<=m; i++){
        cout << a << " ";
        a = a+3;
    }

    return 0;
}