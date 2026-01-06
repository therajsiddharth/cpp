#include<iostream>
#include<iomanip> // For manipulators
using namespace std;
//Manipulators in C++ are used to format the output. They are included in the <iomanip> header file.
/*Important manipulators include:
- endl: Inserts a new line and flushes the output buffer.
- setw(n): Sets the width of the next input/output field to n characters.
- setfill(c): Sets the fill character to c for padding.
- setprecision(n): Sets the decimal precision to n digits for floating-point numbers.
- fixed: Forces floating-point numbers to be displayed in fixed-point notation.
- showpoint: Forces the decimal point to be displayed for floating-point numbers.
- noshowpoint: Prevents the decimal point from being displayed for floating-point numbers when not necessary.
- left: Left-justifies the output within the specified width.
- right: Right-justifies the output within the specified width.
- internal: Justifies the output internally (for numbers with signs).
- boolalpha: Displays boolean values as true/false instead of 1/0.
- noboolalpha: Displays boolean values as 1/0 instead of true/false.
- showpos: Forces the display of the positive sign (+) for positive numbers.
- noshowpos: Prevents the display of the positive sign (+) for positive numbers.
- dec: Sets the number base to decimal for integer output.
- oct: Sets the number base to octal for integer output.
- hex: Sets the number base to hexadecimal for integer output.
- scientific: Forces floating-point numbers to be displayed in scientific notation.
*/
int main(){
    // Example usage of manipulators
    double num1 = 123.456789;
    double num2 = 9876.54321;

    cout << "Default Output:" << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    cout << endl;
    cout << "Formatted Output using Manipulators:" << endl;

    cout << "Using setprecision(4):" << endl;
    cout << "num1: " << setprecision(4) << num1 << endl;
    cout << "num2: " << setprecision(4) << num2 << endl;
    cout << endl;

    cout << "Using fixed and setprecision(4):" << endl;
    cout << "num1: " << fixed << setprecision(4) << num1<< endl;
    cout<< "num2: " << fixed << setprecision(4) << num2 << endl;
    cout << endl;

    cout << "Using setw(15) and setfill('*'):" << endl;
    cout << "num1: " << setw(15) << setfill('*') << num1 << endl;
    cout << "num2: " << setw(15) << setfill('*') << num2 << endl;
    cout << endl;

    cout << "Using left and right justification:" << endl;
    cout << "num1 (left): " << left << setw(15) << num1 << endl;
    cout << "num2 (right): " << right << setw(15) << num2 << endl;
    cout << endl;

    cout << "Using boolalpha:" << endl;
    cout << "true as boolalpha: " << boolalpha << true << endl;
    cout << "false as boolalpha: " << boolalpha << false << endl;
    cout << endl;

    cout << "Using showpos:" << endl;
    cout << "Positive num1 with showpos: " << showpos << num1 << endl;
    cout << "Negative num2 with showpos: " << showpos << -num2 << endl;
    cout << endl;

    cout << "Using different number bases:" << endl;
    int intNum = 255;
    cout << "Decimal: " << dec << intNum << endl;
    cout << "Octal: " << oct << intNum << endl;
    cout << "Hexadecimal: " << hex << intNum << endl;
    cout << endl;

    cout << "Using scientific notation:" << endl;
    cout << "num1 in scientific: " << scientific << num1 << endl;
    cout << "num2 in scientific: " << scientific << num2 << endl;

    return 0;
}

