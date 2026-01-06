#include <iostream>
#include <cstdint> // For fixed-width integer types
using namespace std;
int main()
{
    cout << "Data Types in C++:" << endl;
    // Data Types in C++
    // 1.BUILT-IN DATA TYPES  //int, float, double, char, bool, void ~(Primitive Data Types)
    // 2.USER-DEFINED DATA TYPES  //struct, class, union, enum, templates
    // 3.DERIVED DATA TYPES  //array, pointer, reference, function, recursive function
    /* Additional Data Types:
    -NULL TYPE //nullptr '\0'
    -AUTO TYPE 
    -DECLTYPE TYPE
    -FIXED WIDTH INTEGRAL TYPES 
    -SIGNED AND UNSIGNED TYPES
    -WIDE CHARACTER TYPES
    */
    //C++ also supports modifiers like unsigned, short, and long to tweak the size and range of numeric types.
    //For example, unsigned int only stores non-negative integers but allows larger maximum values than a signed int.
      return 0;
}

/* Note: - User-defined data types include structures (struct), classes (class), unions (union),
           and enumerations (enum). 
         - Derived data types include arrays, pointers, references, and function types. */

/* 
========================================================================
DATA TYPES CLASSIFICATION: 
1. USER DEFINED  - (Structure, Union, Classc, Enumerations)
2. DERIVED TYPE  - (Array, Functions, Pointer, Refrence)
3. BUILT-IN TYPE - Intergaral(Int, Char), Floating(Float, Double), void 
========================================================================
*/