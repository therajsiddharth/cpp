/*
========================================================
              ARRAYS AND STRINGS IN C++
========================================================

--------------------------------------------------------
1. WHAT IS AN ARRAY?
--------------------------------------------------------
An array is a linear data structure that stores multiple
elements of the SAME data type (homogeneous elements)
in contiguous memory locations.

Each element of an array can be accessed directly using
its index value.

--------------------------------------------------------
2. KEY FEATURES OF ARRAYS
--------------------------------------------------------
- Stores homogeneous data only
- Memory is allocated contiguously (one after another)
- Supports random (direct) access using index
- Fast access time: O(1)
- Size is fixed at the time of declaration

--------------------------------------------------------
3. WHY ARRAYS ARE 0-INDEXED?
--------------------------------------------------------
Array indexing starts from 0 to simplify memory address
calculation.

If base address = B and index = i,
Address of element = B + (i × size of data type)

Hence, 0-based indexing avoids extra subtraction.

For an array of size n:
Valid indices → 0 to n-1

--------------------------------------------------------
4. DECLARING AND CREATING AN ARRAY
--------------------------------------------------------
Syntax:
--------------------------------------------------------
data_type array_name[array_size];
--------------------------------------------------------

Example:
--------------------------------------------------------
int arr[5];
--------------------------------------------------------

Explanation:
- int        → data type
- arr        → array name
- [5]        → size of array

When an array is declared:
- Memory is reserved immediately
- Values are garbage until initialized

--------------------------------------------------------
5. INITIALIZING AN ARRAY
--------------------------------------------------------
Example:
--------------------------------------------------------
int arr[5] = {1, 2, 3, 4, 5};
--------------------------------------------------------

Partial initialization:
--------------------------------------------------------
int arr[5] = {1, 2};   // remaining values = 0
--------------------------------------------------------

--------------------------------------------------------
6. ACCESSING ARRAY ELEMENTS
--------------------------------------------------------
Elements are accessed using index values.

Example:
--------------------------------------------------------
arr[0]   // first element
arr[4]   // last element (for size 5)
--------------------------------------------------------

--------------------------------------------------------
7. FINDING AN ELEMENT IN AN ARRAY
--------------------------------------------------------
Methods:
1. Direct access (if index is known)
2. Linear search (sequential)
3. Binary search (sorted array)
4. Hash-based methods (for faster repeated lookups)

--------------------------------------------------------
8. INSERTION AND DELETION IN ARRAYS
--------------------------------------------------------
Insertion:
- At end → O(1)
- At beginning/middle → requires shifting → O(n)

Deletion:
- Direct deletion by index → O(1)
- Shifting required to maintain order

--------------------------------------------------------
9. LIMITATIONS OF ARRAYS
--------------------------------------------------------
- Fixed size
- Cannot store mixed data types
- Insertion and deletion are costly
- Memory wastage possible

--------------------------------------------------------
10. SUMMARY OF ARRAYS
--------------------------------------------------------
- Fast access using index
- Contiguous memory allocation
- Fixed size
- Homogeneous data
- Efficient for static data

========================================================
                  STRINGS IN C++
========================================================

--------------------------------------------------------
11. WHAT IS A STRING?
--------------------------------------------------------
A string is a sequence of characters stored in a
specific order. Each character is accessed using
0-based indexing.

In C++, strings can be:
1. C-style strings (character arrays)
2. std::string (recommended)

--------------------------------------------------------
12. STRING INDEXING
--------------------------------------------------------
Each character has an index starting from 0.

Example:
--------------------------------------------------------
string s = "striver";

Index:  0 1 2 3 4 5 6
Chars:  s t r i v e r
--------------------------------------------------------

--------------------------------------------------------
13. FINDING LENGTH OF A STRING
--------------------------------------------------------
Using std::string functions:

--------------------------------------------------------
s.length();
s.size();
--------------------------------------------------------

Both return the number of characters in the string.

--------------------------------------------------------
14. ACCESSING INDIVIDUAL CHARACTERS
--------------------------------------------------------
Characters are accessed like arrays.

Example:
--------------------------------------------------------
s[0]   // first character
s[2]   // third character
--------------------------------------------------------

--------------------------------------------------------
15. STRING CONCATENATION
--------------------------------------------------------
Strings can be concatenated using + operator.

Example:
--------------------------------------------------------
string a = "Hello";
string b = "World";
string c = a + b;
--------------------------------------------------------

--------------------------------------------------------
16. PASSING AND RETURNING STRINGS
--------------------------------------------------------
- Strings can be passed to functions like normal variables
- Passing by value creates a copy
- Changes inside function do not affect original string
- Passing by reference avoids copying

--------------------------------------------------------
17. COPYING STRINGS
--------------------------------------------------------
Assigning one string to another creates a deep copy.

Example:
--------------------------------------------------------
string a = "Hello";
string b = a;   // b gets a copy of a
--------------------------------------------------------

--------------------------------------------------------
18. STRING COMPARISON
--------------------------------------------------------
Operators used:
--------------------------------------------------------
==   → checks equality
!=   → checks inequality
--------------------------------------------------------

Example:
--------------------------------------------------------
if (a == b) {
    // strings are equal
}
--------------------------------------------------------

Characters can also be compared individually.

--------------------------------------------------------
19. IMPORTANT NOTES
--------------------------------------------------------
- Strings use 0-based indexing
- std::string is safer than C-style strings
- Strings can be dynamically resized
- Use reference passing for efficiency

--------------------------------------------------------
20. SUMMARY OF STRINGS
--------------------------------------------------------
- Sequence of characters
- Indexed access
- Built-in functions available
- Easy manipulation and comparison
- Safer and flexible with std::string

========================================================
                END OF NOTES
========================================================
*/
