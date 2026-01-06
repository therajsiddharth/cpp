/*
========================================================
                FUNCTIONS IN C++
========================================================

--------------------------------------------------------
1. INTRODUCTION
--------------------------------------------------------
A function is a block of code designed to perform a
specific task. Functions help divide a program into
smaller, reusable, and manageable parts.

Advantages of Functions:
- Code reusability
- Modular programming
- Improved readability
- Easy debugging and maintenance

What and Why?
- To tackle repetition
- A block of code that we use multiple times

--------------------------------------------------------
2. TYPES OF FUNCTIONS
--------------------------------------------------------
1. Built-in (Library) Functions
2. User-defined Functions

--------------------------------------------------------
3. BUILT-IN FUNCTIONS
--------------------------------------------------------
Functions provided by C++ standard libraries.

Examples:
- sqrt(), pow(),cbrt()        // <cmath>
- max(), min()                // <iostream>
- strlen()                    // <cstring>
- abs(), rand()               // <cstdlib>
--------------------------------------------------------
4. USER-DEFINED FUNCTIONS
--------------------------------------------------------
Functions written by the programmer to perform
specific operations.

--------------------------------------------------------
5. FUNCTION DECLARATION (PROTOTYPE)
--------------------------------------------------------
A function declaration informs the compiler about:
- Function name
- Return type
- Number and type of parameters

Syntax:
--------------------------------------------------------
return_type function_name(parameter_list);
--------------------------------------------------------

Example:
--------------------------------------------------------
int add(int, int);
--------------------------------------------------------

--------------------------------------------------------
6. FUNCTION DEFINITION
--------------------------------------------------------
The function definition contains the actual code
to be executed when the function is calledj.

Syntax:
--------------------------------------------------------
return_type function_name(parameter_list) {
    // function body
    return value;
}
--------------------------------------------------------

--------------------------------------------------------
7. FUNCTION CALL
--------------------------------------------------------
A function call executes the function.

Syntax:
--------------------------------------------------------
function_name(arguments);
--------------------------------------------------------

Example:
--------------------------------------------------------
int result = add(10, 20);
--------------------------------------------------------

--------------------------------------------------------
8. RETURN TYPE
--------------------------------------------------------
- Specifies the type of value returned by a function.
- Use void if no value is returned.

Example:
--------------------------------------------------------
void display() {
    cout << "Hello";
}
--------------------------------------------------------

--------------------------------------------------------
9. FUNCTION PARAMETERS
--------------------------------------------------------
Parameters pass data to functions.

Types:
- Actual parameters (arguments)
- Formal parameters (function parameters)

--------------------------------------------------------
10. CALL BY VALUE
--------------------------------------------------------
- A copy of the actual value is passed.
- Changes inside the function do not affect the
  original value.

--------------------------------------------------------
11. CALL BY REFERENCE
--------------------------------------------------------
- Reference or address of variable is passed.
- Changes inside the function affect the original
  value.

--------------------------------------------------------
12. FUNCTION OVERLOADING
--------------------------------------------------------
Multiple functions having the same name but different
parameter lists.

Example:
--------------------------------------------------------
int add(int a, int b);
float add(float a, float b);
--------------------------------------------------------

--------------------------------------------------------
13. DEFAULT ARGUMENTS
--------------------------------------------------------
Allows functions to have default values for parameters.

Rules:
- Default arguments must be specified from right to left.

Example:
--------------------------------------------------------
int sum(int a, int b = 10);
--------------------------------------------------------

--------------------------------------------------------
14. INLINE FUNCTIONS
--------------------------------------------------------
- Function code is expanded at the point of call.
- Reduces function call overhead.
- Best suited for small functions.

Syntax:
--------------------------------------------------------
inline int square(int x) {
    return x * x;
}
--------------------------------------------------------

--------------------------------------------------------
15. RECURSION
--------------------------------------------------------
A function calling itself is called recursion.

Requirements:
- Base condition
- Recursive call

Example:
--------------------------------------------------------
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
--------------------------------------------------------

--------------------------------------------------------
16. LAMBDA FUNCTIONS (C++11+)
--------------------------------------------------------
Anonymous functions defined at runtime.

Syntax:
--------------------------------------------------------
[capture](parameters) {
    // function body
};
--------------------------------------------------------

Example:
--------------------------------------------------------
auto sum = [](int a, int b) {
    return a + b;
};
--------------------------------------------------------

--------------------------------------------------------
17. FUNCTION SCOPE
--------------------------------------------------------
- Local variables: Declared inside a function
- Global variables: Declared outside all functions

--------------------------------------------------------
18. IMPORTANT NOTES
--------------------------------------------------------
- Functions must be declared before use.
- Avoid excessive global variables.
- Use recursion carefully to prevent stack overflow.
- Prefer pass-by-reference for large data.

--------------------------------------------------------
19. SUMMARY
--------------------------------------------------------
- Functions improve code structure and reuse
- Support modular and structured programming
- Essential for large-scale C++ programs

========================================================
                END OF NOTES
========================================================
*/
