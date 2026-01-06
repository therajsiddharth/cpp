#include <iostream>
using namespace std;
int main(){
    // Siddharth -> Sid -> Another name for Siddharth

    float x= 455.5f;
    float& y = x; // y is a reference variable referring to x
    cout << "Value of x: " << x << endl;
    cout << "Value of y (reference to x): " << y <<  endl;

    return 0;
}