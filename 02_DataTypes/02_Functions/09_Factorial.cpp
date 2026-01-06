#include<iostream>
using namespace std;

int fact(int a){
    int fact =1;
    for(int i=1; i<=a;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"enter a no: ";
    cin>>n;
    cout << fact(n);
    return 0;
}