// File: inline_function_example.cpp
// Topic: Inline Functions in C++
//
// Inline Function:
// - The function body is expanded at the point where it is called
// - Reduces function call overhead (no stack push/pop)
// - Best suited for small and frequently used functions
// - Compiler may ignore 'inline' if function is too complex

#include <iostream>
using namespace std;

// Inline function declaration & definition
inline int square(int x)
{
    // This function will be expanded wherever it is called
    // Instead of a normal function call
    return x * x;
}

inline int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num = 5;

    // Function call
    // Compiler replaces square(num) with (num * num)
    cout << "Square of " << num << " is: " << square(num) << endl;
    cout << "Max value: " << maxValue(10, 20)<<endl;
    cout << add(3, 4)<<endl;

    return 0;
}

// Used only for short programs to save compile time
// it directly returns the value.
// Used repeatedly in game physics or graphics


