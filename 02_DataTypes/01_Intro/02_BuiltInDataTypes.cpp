#include <iostream>
using namespace std;

int main()
{
    cout << "====================================\n";
    cout << "BUILT-IN DATA TYPES IN C++\n";
    cout << "====================================\n\n";

    /*
    BUILT-IN DATA TYPES:
    --------------------
    1. Integer Types       -> int, short, long, long long
    2. Floating Types      -> float, double, long double
    3. Character Type      -> char
    4. Boolean Type        -> bool
    5. Void Type           -> void (no value)
    */

    // -----------------------------
    // 1. INTEGER DATA TYPES
    // -----------------------------
    int intVar = 42;
    short shortVar = 10;
    long longVar = 100000L;
    long long longLongVar = 10000000000LL;

    cout << "1. Integer Data Types:\n";
    cout << "int        : " << intVar << endl;
    cout << "short      : " << shortVar << endl;
    cout << "long       : " << longVar << endl;
    cout << "long long  : " << longLongVar << endl;

    // -----------------------------
    // 2. FLOATING-POINT DATA TYPES
    // -----------------------------
    float floatVar = 3.14f;
    double doubleVar = 3.1415926535;
    long double longDoubleVar = 3.141592653589793238L;

    cout << "\n2. Floating-Point Data Types:\n";
    cout << "float       : " << floatVar << endl;
    cout << "double      : " << doubleVar << endl;
    cout << "long double : " << longDoubleVar << endl;

    // -----------------------------
    // 3. CHARACTER DATA TYPE
    // -----------------------------
    char charVar = 'A';

    cout << "\n3. Character Data Type:\n";
    cout << "char : " << charVar << endl;

    // -----------------------------
    // 4. BOOLEAN DATA TYPE
    // -----------------------------
    bool boolVar = true;

    cout << "\n4. Boolean Data Type:\n";
    cout << "bool : " << boolalpha << boolVar << endl;

    // -----------------------------
    // 5. VOID DATA TYPE
    // -----------------------------
    cout << "\n5. Void Data Type:\n";
    cout << "void represents absence of value and is mainly used with functions.\n";

    // -----------------------------
    // SIZE OF BUILT-IN DATA TYPES
    // -----------------------------
    cout << "\nSizes of Built-in Data Types:\n";
    cout << "Size of int        : " << sizeof(int) << " bytes\n";
    cout << "Size of float      : " << sizeof(float) << " bytes\n";
    cout << "Size of double     : " << sizeof(double) << " bytes\n";
    cout << "Size of char       : " << sizeof(char) << " byte\n";
    cout << "Size of bool       : " << sizeof(bool) << " byte\n";

    cout << "\n====================================\n";
    cout << "End of Built-in Data Types Notes\n";
    cout << "====================================\n";

    return 0;
}
