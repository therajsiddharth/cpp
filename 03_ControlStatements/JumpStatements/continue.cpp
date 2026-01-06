//WAP to print odd numbers from 1 to 100 using continue.
#include <iostream>
using namespace std;
int main(){
    int n =100;
    // cout << "Enter a number: ";
    // cin>>n;

    for(int i=1; i<=n; i++){
        if(i%2==0) continue;
        cout << i<<" ";
    }

    return 0;
}