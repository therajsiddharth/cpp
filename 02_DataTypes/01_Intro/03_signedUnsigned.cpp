/*
========================================================
SIGNED vs UNSIGNED — HOW SYSTEM UNDERSTANDS NUMBERS
========================================================

BASIC IDEA:
-----------
• Computer hardware understands ONLY bits (0 and 1).
• Bits have NO inherent meaning (signed / unsigned).
• Meaning is decided by:
    → Data type
    → Compiler
    → CPU instruction used

--------------------------------------------------------
1. DOES THE SYSTEM KNOW SIGNED OR UNSIGNED BY ITSELF?
--------------------------------------------------------
❌ NO.

Example bit pattern:
    11000

Same bits can mean:
    • 24  → if treated as UNSIGNED
    • -8  → if treated as SIGNED (two’s complement, 5-bit)

--------------------------------------------------------
2. WHO DECIDES THE INTERPRETATION?
--------------------------------------------------------
✅ Programmer + Compiler

• Programmer specifies data type
• Compiler generates appropriate machine instructions
• CPU executes those instructions

--------------------------------------------------------
3. MEMORY STORES ONLY BITS
--------------------------------------------------------
• RAM does NOT store type information
• RAM stores raw binary data only

Example in memory:
    11000

Type is known ONLY at program level.

--------------------------------------------------------
4. EXAMPLES IN C++
--------------------------------------------------------

Example 1: Unsigned vs Signed
-----------------------------
unsigned char a = 24;     // Binary: 00011000 → 24
signed char   b = -8;     // Binary: 11111000 → -8

Memory stores only:
    00011000
    11111000

Meaning depends on variable type.

--------------------------------------------------------
Example 2: Same Bits, Different Meaning
---------------------------------------
signed char x   = 0b11000;    // -8  (two’s complement)
unsigned char y = 0b11000;    // 24

Same bits:
    11000

Different result due to data type.

--------------------------------------------------------
Example 3: Integer Overflow
---------------------------
unsigned char u = 255;
u = u + 1;    // wraps to 0

signed char s = 127;
s = s + 1;    // overflow → undefined behavior

--------------------------------------------------------
5. CPU INSTRUCTIONS HANDLE SIGNEDNESS
--------------------------------------------------------
• CPU uses different comparison instructions:
    - Signed comparison   → JG, JL
    - Unsigned comparison → JA, JB

Example:
    if (a > b)   // signed or unsigned depends on data type

--------------------------------------------------------
6. WHY TWO’S COMPLEMENT?
--------------------------------------------------------
• Same hardware for + and −
• Easy sign handling
• Efficient & fast
• Used by almost all modern CPUs

--------------------------------------------------------
KEY RULE (IMPORTANT FOR EXAMS):
--------------------------------------------------------
"Bits do not define meaning.
 Interpretation defines meaning."

--------------------------------------------------------
QUICK REVISION POINTS:
--------------------------------------------------------
• CPU sees bits, not types
• RAM stores only binary data
• Compiler decides signed/unsigned
• Data type controls interpretation
• Same bits → different values

========================================================
END OF NOTES
========================================================
*/
