#include <iostream>
using namespace std;
int main(){

    float x= 5/2; // INT/INT = INT
    cout << "Value of x (5/2): " << x << endl;

    float y= 5/2.0f; // INT/FLOAT = FLOAT or FLOAT/INT = FLOAT
    cout << "Value of y (5/2.0f): " << y << endl;

    float d = 2/7; // INT/INT = INT
    cout << "Value of d (2/7): " << d << endl;  //0

    cout << 5/2 << endl; // INT/INT = INT
    cout << 5/2.0 << endl; // INT/FLOAT =FLOAT
    cout << 5.0/2 <<endl; // FLOAT/INT =FLOAT
    cout << 5.0/2.0 << endl; // FLOAT/FLOAT =FLOAT

    cout << 7/22*(3.14+2) *3/5 << endl; //0
    // Dry run and find the output
    // According to operator precedence and associativity rules, the operations will be performed in the following order:
    // 3.14 + 2 = 5.14 (FLOAT) -> 7/22 * 5.14 * 3 / 5
    // 7/22 = 0 (INT) -> 0 * 5.14 * 3 / 5 
    // 0 * 5.14 = 0 (INT) -> 0 * 3 / 5
    // 0 * 3 = 0 (INT) -> 0 / 5 = 0 (INT)
    
    cout << "The expression x = 4 + 2 % - 8 evaluates to: " << 4 + 2 % -8 << endl; //6
    // Dry Run
    // According to Precedence and Associativity: 
    // Modulus Operator a<(-b) =a -> 4 + 2 % -8 = 4 + 2 -> 6

    return 0;
}