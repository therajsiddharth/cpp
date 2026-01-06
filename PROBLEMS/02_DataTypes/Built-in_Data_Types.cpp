#include <bits/stdc++.h>
using namespace std;
int main(){
    //int -4, long-4, long long-8, short-2, signed int, unsigned int
    int a = 1;
    short b= 2345;
    long c= 100;
    long long d= 12345;
    signed long e=12345;
    unsigned int f= 34;

    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    cout << d <<endl;
    cout << e <<endl;
    cout << f <<endl;
    
    //float-4 ,double-8, long double-12
    float g = 123.324;
    double h =123.32452346;

    cout << g <<endl;
    cout << h <<endl;

    //String and getline
    string s;
    cin>>s;
    cout<<s<<endl;

    string s1, s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;

    string str;
    getline (cin, str);
    cout<<str<<endl;

    //char -1     //There are 256 characters in dictionary
    char ch = 'a';
    cout<<ch<<endl;

    return 0;
}