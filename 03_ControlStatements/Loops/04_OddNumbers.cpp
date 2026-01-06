//Print all the odd numbers from 1 to n using for loop.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i+=2){
        cout << i<<" ";
    }

    return 0;
}