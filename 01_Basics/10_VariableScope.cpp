#include <iostream>
using namespace std;
int globalVar = 100; // Global scope variable that can be accessed anywhere
void display(){
    int x = 5; // Local scope variable in void display()
    cout << "Value of x inside display(): " << x << endl;
}

int main(){
    int a = 10; // Global scope variable in main()

    {
        // Start of a new block
        int b = 20; // Local scope variable
        cout << "Inside block:" << endl;
        cout << "a = " << a << endl; // Accessible
        cout << "b = " << b << endl; // Accessible
    } // End of block

    cout << "Outside block:" << endl;
    cout << "a = " << a << endl; // Accessible
    // cout << "b = " << b << endl; // Not accessible, will cause an error
    display(); // Call function to demonstrate local scope
    cout << "Value of a in main(): " << a << endl;
    cout << "Value of globalVar that can be accessed anywhere throughout the program: " << globalVar << endl;

    return 0;
    
}