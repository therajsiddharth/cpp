/*
========================================================
LOW-LEVEL MEMORY ACCESS (C++)
========================================================

Low-level memory access allows a programmer to:
• Work directly with memory addresses
• Control how data is stored and accessed
• Write efficient system-level code

--------------------------------------------------------
1. POINTERS
--------------------------------------------------------
A pointer is a variable that stores the ADDRESS of
another variable.

Syntax:
-------
    data_type *pointer_name;

Example:
--------
    int a = 10;
    int *p = &a;

    a   → value 10
    &a  → address of a
    p   → stores address of a
    *p  → value at that address (10)

--------------------------------------------------------
2. POINTER OPERATORS
--------------------------------------------------------
• &  → Address-of operator
• *  → Dereference operator

Example:
--------
    int x = 5;
    int *ptr = &x;

    cout << x;     // 5
    cout << &x;    // address of x
    cout << ptr;   // same address
    cout << *ptr;  // 5

--------------------------------------------------------
3. POINTER ARITHMETIC
--------------------------------------------------------
Pointer arithmetic moves by SIZE of data type.

Example:
--------
    int arr[3] = {10, 20, 30};
    int *p = arr;

    p     → arr[0]
    p+1   → arr[1]
    p+2   → arr[2]

--------------------------------------------------------
4. DIRECT MEMORY MANIPULATION
--------------------------------------------------------
Directly accessing or modifying memory using pointers.

Example:
--------
    int a = 10;
    int *p = &a;

    *p = 25;   // changes value at memory address

    a is now 25

--------------------------------------------------------
5. POINTERS AND ARRAYS
--------------------------------------------------------
Array name acts as a pointer to first element.

Example:
--------
    int arr[5] = {1,2,3,4,5};

    arr      → address of arr[0]
    *(arr)   → 1
    *(arr+1) → 2

--------------------------------------------------------
6. POINTER TO POINTER
--------------------------------------------------------
A pointer that stores address of another pointer.

Example:
--------
    int a = 10;
    int *p = &a;
    int **pp = &p;

    *p   → 10
    **pp → 10

--------------------------------------------------------
7. NULL POINTER
--------------------------------------------------------
A pointer that does not point to any valid memory.
Example:
--------
    int *ptr = NULL;   // or nullptr (C++11+)

Used to avoid garbage addresses.

--------------------------------------------------------
8. DANGERS OF DIRECT MEMORY ACCESS
--------------------------------------------------------
• Dereferencing uninitialized pointers
• Memory leaks
• Dangling pointers
• Buffer overflow

Example (BAD CODE):
-------------------
    int *p;
    *p = 10;   // undefined behavior

--------------------------------------------------------
9. WHY LOW-LEVEL MEMORY ACCESS IS IMPORTANT
--------------------------------------------------------
• Operating Systems
• Embedded Systems
• Game Engines
• Device Drivers
• Performance-critical applications

--------------------------------------------------------
KEY RULES (EXAM GOLD):
--------------------------------------------------------
• Pointers store addresses, not values
• Dereferencing accesses actual data
• Arrays and pointers are closely related
• Memory manipulation is powerful but risky

========================================================
END OF NOTES
========================================================
*/