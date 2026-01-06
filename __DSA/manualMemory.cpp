/*
========================================================
HIGH PERFORMANCE PROGRAMMING (C++)
========================================================

High performance means:
• Fast execution speed
• Efficient memory usage
• Low-level control over resources

C++ is widely used where performance is critical.

--------------------------------------------------------
1. FAST EXECUTION
--------------------------------------------------------
C++ is a compiled language:
• Source code → Machine code
• No interpreter at runtime
• Minimal overhead

Reasons for fast execution:
--------------------------
• Direct CPU instructions
• No garbage collector pauses
• Inline functions
• Efficient loops and algorithms

Example:
--------
inline int square(int x)
{
    return x * x;   // avoids function call overhead
}

--------------------------------------------------------
2. MANUAL MEMORY CONTROL
--------------------------------------------------------
C++ allows explicit control over memory allocation
and deallocation.

Memory areas:
-------------
• Stack  → automatic, fast, limited
• Heap   → dynamic, flexible, slower than stack

--------------------------------------------------------
3. DYNAMIC MEMORY ALLOCATION
--------------------------------------------------------
Programmer decides:
• When memory is allocated
• When memory is released

Example:
--------
int *ptr = new int(10);   // allocate memory
delete ptr;               // free memory

Advantage:
----------
• No unnecessary memory usage
• Better performance if managed correctly

--------------------------------------------------------
4. AVOIDING UNNECESSARY OVERHEAD
--------------------------------------------------------
• No automatic garbage collection
• No runtime type checking by default
• No bounds checking (arrays)

Result:
-------
Faster execution, but more responsibility.

--------------------------------------------------------
5. PASS BY REFERENCE (PERFORMANCE BOOST)
--------------------------------------------------------
Avoids copying large objects.

Example:
--------
void update(int &x)
{
    x += 10;
}

--------------------------------------------------------
6. USE OF POINTERS FOR SPEED
--------------------------------------------------------
• Direct memory access
• Faster than high-level abstractions

Example:
--------
int a = 5;
int *p = &a;
*p = 20;   // direct memory write

--------------------------------------------------------
7. CACHE-FRIENDLY CODE
--------------------------------------------------------
• Contiguous memory access is faster
• Arrays are faster than linked lists

Example:
--------
int arr[1000];   // better cache locality

--------------------------------------------------------
8. WHY MANUAL MEMORY CONTROL IMPROVES PERFORMANCE
--------------------------------------------------------
• No GC pauses
• Predictable execution time
• Lower latency

Used in:
---------
• Game engines
• Operating systems
• High-frequency trading
• Embedded systems

--------------------------------------------------------
RISKS (IMPORTANT):
--------------------------------------------------------
• Memory leaks
• Dangling pointers
• Undefined behavior

Performance comes with responsibility.

--------------------------------------------------------
EXAM KEY POINTS:
--------------------------------------------------------
• C++ provides fine-grained memory control
• Manual memory management improves speed
• Stack memory is faster than heap
• No garbage collector → predictable runtime

========================================================
END OF NOTES
========================================================
*/
