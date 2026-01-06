#include <iostream>
using namespace std;
int main(){
    //Any Arithmetic Progression 
    //nth term = a + (n-1)d >> a=1, d=2

    //User Input
    int a,d,n;
    cout<<"Enter 1st term of an AP: ";
    cin>>a;
    cout<<"Enter the difference of an AP: ";
    cin>>d;
    cout<<"Enter nth term of an AP: ";
    cin>>n;

    for(int i=a; i<=(a + (n-1)*d); i+=d){
        cout << i << " ";
    }
    
    return 0;
}