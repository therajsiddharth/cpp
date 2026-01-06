//Power of 2
//Odd Even 

//Left Shift     a << b = a * 2^b 
//Right Shift    a >> b = a / 2^b

#include <iostream>
using namespace std;
int main ()
{
    cout << (10 << 2) << endl; // 101000 = 40
    cout << (10 >> 1) << endl; // 101    = 5

    cout << (6 & 10) << endl; // 0110 and 1010 = 0010 //2
    cout << (6 | 10) << endl; // 0110 or  1010 = 1110 //14
    cout << (6 ^ 10) << endl; // 0110 xor 1010 = 1100 //12

    //XOR - Exclusive OR = same -> 0, diff -> 1
    //eg. 0 ^ 0 = 0
    //    1 ^ 1 = 0
    //    0 ^ 1 = 1
    //    1 ^ 0 = 1

    int e = 5;  // Binary: 0101
    int f = 3;  // Binary: 0011
    cout << "\nBitwise Operations:" << endl;
    cout << "e & f (AND): " << (e & f) << endl;   // Binary: 0001
    cout << "e | f (OR): " << (e | f) << endl;    // Binary: 0111
    cout << "e ^ f (XOR): " << (e ^ f) << endl;   // Binary: 0110
    cout << "~e (NOT): " << (~e) << endl;         // Binary: 1010 (two's complement)
    cout << "e << 1 (Left Shift): " << (e << 1) << endl; // Binary: 1010
    cout << "e >> 1 (Right Shift): " << (e >> 1) << endl; // Binary: 0010


    return 0;
}
