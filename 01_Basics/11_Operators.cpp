#include <iostream>
using namespace std;
int main(){

    // 1. Arithmetic Operators
    int p = 10;
    int q = 3;
    cout << "\nMath Operations:" << endl;
    cout << "p: " << p << ", q: " << q << endl;
    cout << "p + q = " << (p + q) << endl;
    cout << "p - q = " << (p - q) << endl;
    cout << "p * q = " << (p * q) << endl;
    cout << "p / q = " << (p / q) << endl;
    cout << "p % q = " << (p % q) << endl; 
    // Modulus operator Rules:
    // 1. Both operands must be integers.  i.e., a,b ∈ Z
    // 2. The result has the same sign as the dividend (the first operand). i.e., a%(-b) = a%b and (-a)%b = -(a%b)
    // 3. a%b =a -> if |a| < |b|
    // 4. a%1 = 0 -> for any integer a
    // 5. 0%b = 0 -> for any non-zero integer b

    // Example:
    // 10 % 3 = 1
    // -10 % 3 = -1
    // 10 % -3 = 1
    // -10 % -3 = -1
    // Note: The modulus operator (%) is not defined for floating-point numbers.
    // For floating-point numbers, you can use the fmod() function from the <cmath> library.
    // Example:
    // #include <cmath>
    // double result = fmod(5.3, 2.0); // result will be 1.3
    // Always ensure to include <cmath> when using fmod().
    


    // 2. Relational Operators
    cout << "\nRelational Operations:" << endl;
    cout << "p == q: " << (p == q) << endl;
    cout << "p != q: " << (p != q) << endl;
    cout << "p > q: " << (p > q) << endl;
    cout << "p < q: " << (p < q) << endl;
    cout << "p >= q: " << (p >= q) << endl;
    cout << "p <= q: " << (p <= q) << endl;

    // 3. Logical Operators
    bool a = true;
    bool b = false;
    cout << "\nLogical Operations:" << endl;
    cout << "a && b: " << (a && b) << endl; // Logical AND
    cout << "a || b: " << (a || b) << endl; // Logical OR
    cout << "!a: " << (!a) << endl;         // Logical NOT
    
    // 4. Assignment Operators
    int c = 5;
    cout << "\nAssignment Operations:" << endl;
    cout << "Initial value of c: " << c << endl;
    c += 2; // c = c + 2
    cout << "After c += 2: " << c << endl;
    c -= 1; // c = c - 1
    cout << "After c -= 1: " << c << endl;
    c *= 3; // c = c * 3
    cout << "After c *= 3: " << c << endl;
    c /= 2; // c = c / 2
    cout << "After c /= 2: " << c << endl;
    c %= 3; // c = c % 3
    cout << "After c %= 3: " << c << endl;

    // 5. Increment and Decrement Operators
    int d = 10;
    cout << "\nIncrement and Decrement Operations:" << endl;
    cout << "Initial value of d: " << d << endl;
    cout << "Post-increment d++: " << d++ << endl; // Post-increment
    cout << "Value of d after post-increment: " << d << endl;
    cout << "Pre-increment ++d: " << ++d << endl;  // Pre-increment
    cout << "Post-decrement d--: " << d-- << endl; // Post-decrement
    cout << "Value of d after post-decrement: " << d << endl;
    cout << "Pre-decrement --d: " << --d << endl;  // Pre-decrement

    // 6. Bitwise Operators
    int e = 5;  // Binary: 0101
    int f = 3;  // Binary: 0011
    cout << "\nBitwise Operations:" << endl;
    cout << "e & f (AND): " << (e & f) << endl;   // Binary: 0001
    cout << "e | f (OR): " << (e | f) << endl;    // Binary: 0111
    cout << "e ^ f (XOR): " << (e ^ f) << endl;   // Binary: 0110
    cout << "~e (NOT): " << (~e) << endl;         // Binary: 1010 (two's complement)
    cout << "e << 1 (Left Shift): " << (e << 1) << endl; // Binary: 1010
    cout << "e >> 1 (Right Shift): " << (e >> 1) << endl; // Binary: 0010

    // 7. Conditional (Ternary) Operator
    int age = 20;
    cout << "\nConditional (Ternary) Operation:" << endl;
    string eligibility = (age >= 18) ? "Eligible to vote" : "Not eligible to vote";
    cout << "Age: " << age << " - " << eligibility << endl;

    // 8. Comma Operator
    int g, h;
    cout << "\nComma Operator:" << endl;
    g = (h = 5, h + 10); // h is assigned 5, then g is assigned h + 10
    cout << "Value of g: " << g << ", Value of h: " << h << endl;
    // The comma operator evaluates its first operand (h = 5) and then returns the value of its second operand (h + 10) to be assigned to g.

    // 9. Sizeof Operator
    cout << "\nSizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;

    // Note: The output of boolean values will be 1 (true) and 0 (false)

    //10. Typecast Operator
    int num_int = 9;
    float num = 9.78f;
    cout << "\nTypecast Operator:" << endl;
    cout << "Original float value: " << num << endl;
    cout << "After typecasting to int: " << int(num) << endl;

    static_cast<int>(num); // Another way of typecasting using static_cast
    cout << "After typecasting to int using static_cast: " << static_cast<int>(num) << endl;

    //dynamic_cast<int&>(num); // Note: dynamic_cast is primarily used for polymorphic types (classes with virtual functions) and may not work as expected with primitive types.
    //cout << "After typecasting to int using dynamic_cast: " << dynamic_cast<int&>(num) << endl; // This line is commented out to avoid compilation error.
    
    reinterpret_cast<int&>(num); // Note: reinterpret_cast is used for low-level reinterpreting of bit patterns and should be used with caution.
    cout << "After typecasting to int using reinterpret_cast: " << reinterpret_cast<int&>(num) << endl; // This line is commented out to avoid potential issues.

    //const_cast<const int&>(num); // Note: const_cast is used to add or remove constness.
    //cout << "After typecasting to const int using const_cast: " << const_cast<const int&>(num) << endl; // This line is commented out to avoid potential issues.


    //11. Pointer Operators
    int var = 42;
    int* ptr = &var; // Address-of operator (&)
    cout << "\nPointer Operators:" << endl;
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl; // Dereference operator (*)

    //12. Member Access Operators
    struct Point {
        int x;
        int y;
    };
    Point p1 = {10, 20};
    Point* pPtr = &p1;
    cout << "\nMember Access Operators:" << endl;
    cout << "Using . operator: p1.x = " << p1.x << ", p1.y = " << p1.y << endl;
    cout << "Using -> operator: pPtr->x = " << pPtr->x << ", pPtr->y = " << pPtr->y << endl;

    //13. Scope Resolution Operator
    // namespace First {
    //     int value = 100;
    // }
    // namespace Second {
    //     int value = 200;
    // }
    // cout << "\nScope Resolution Operator:" << endl;
    // cout << "Value from First namespace: " << First::value << endl;
    // cout << "Value from Second namespace: " << Second::value << endl;

    // Note: The Scope Resolution Operator example is commented out to avoid namespace conflicts in this single file.

    //Operator Precedence and Associativity
    // Example to demonstrate operator precedence
    int result = 10 + 5 * 2; // Multiplication has higher precedence
    cout << "\nOperator Precedence Example:" << endl;
    cout << "10 + 5 * 2 = " << result << endl; // Outputs 20
    
    // Example to demonstrate operator associativity
    int assocResult = 20 - 5 - 3; // Left to right associativity
    cout << "\nOperator Associativity Example:" << endl;
    cout << "20 - 5 - 3 = " << assocResult << endl; // Outputs 12
    
    // Parentheses can be used to change precedence
    int changedPrecedence = (10 + 5) * 2;
    cout << "\nChanged Precedence with Parentheses:" << endl;
    cout << "(10 + 5) * 2 = " << changedPrecedence << endl; // Outputs 30

    // Summary of Operator Precedence (from highest to lowest):
    // 1. Parentheses ()
    // 2. Unary operators (++, --, +, -, !, ~)
    // 3. Multiplicative (*, /, %)
    // 4. Additive (+, -)
    // 5. Relational (>, <, >=, <=)
    // 6. Equality (==, !=)
    // 7. Logical AND (&&)
    // 8. Logical OR (||)
    // 9. Assignment (=, +=, -=, etc.)
    // 10. Comma (,)

    // Note: Operators with the same precedence level are evaluated based on their associativity (left-to-right or right-to-left).


    return 0;
}