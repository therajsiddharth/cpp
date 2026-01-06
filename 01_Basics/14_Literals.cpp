// Literals are fixed constant values written directly in code.
// Their value cannot be changed during program execution.
// Assigned Value is Hard coded.

#include <iostream>
using namespace std;

int main()
{
    // 1️⃣ Integer Literals
    int a = 10;      // decimal literal
    int b = 012;     // octal literal (8-based)
    int c = 0xA;     // hexadecimal literal (16-based)

    // 2️⃣ Floating Point Literals
    float pi = 3.14f;      // float literal
    double exp = 2.5e3;    // scientific notation

    // 3️⃣ Character Literal
    char ch = 'A';

    // 4️⃣ String Literal
    string name = "C++ Programming";

    // 5️⃣ Boolean Literals
    bool isValid = true;

    // 6️⃣ Escape Sequence Literals
    char newline = '\n';
    char tab = '\t';

    // 7️⃣ nullptr Literal
    int* ptr = nullptr;

    // Output
    cout << "Integer Literals: " << a << " " << b << " " << c << endl;
    cout << "Floating Literals: " << pi << " " << exp << endl;
    cout << "Character Literal: " << ch << endl;
    cout << "String Literal: " << name << endl;
    cout << "Boolean Literal: " << isValid << endl;
    cout << "Escape Sequences:" << newline << tab << "Tab Space" << endl;
    cout << "Pointer Value: " << ptr << endl;

    return 0;
}
