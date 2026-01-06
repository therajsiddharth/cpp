#include<iostream>
using namespace std;
int main(){
    while (1){
        char ch;
        cout << "Enter a character: " << endl;
        cin >> ch;
        cout <<"ASCII Value of  "<< ch <<" is: "<< int(ch) << endl;
        break;
    }
    return 0;
}