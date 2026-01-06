/*
========================================================
              JUMP STATEMENTS IN C++
========================================================

--------------------------------------------------------
1. INTRODUCTION
--------------------------------------------------------
Jump statements are used to transfer control from one
part of a program to another unconditionally.

They allow immediate change in the normal flow of
execution.

--------------------------------------------------------
2. TYPES OF JUMP STATEMENTS IN C++
--------------------------------------------------------
C++ provides the following jump statements:

1. break
2. continue
3. goto
4. return

--------------------------------------------------------
3. break STATEMENT
--------------------------------------------------------
- Terminates the nearest enclosing loop or switch-case.
- Control moves to the statement immediately after
  the loop or switch.

Used in:
- for loop
- while loop
- do-while loop
- switch-case

Syntax:
--------------------------------------------------------
break;
--------------------------------------------------------

Example:
--------------------------------------------------------
for (int i = 1; i <= 10; i++) {
    if (i == 5)
        break;
    cout << i << " ";
}
--------------------------------------------------------

--------------------------------------------------------
4. continue STATEMENT
--------------------------------------------------------
- Skips the current iteration of the loop.
- Control moves to the next iteration.

Used only in loops.

Syntax:
--------------------------------------------------------
continue;
--------------------------------------------------------

Example:
--------------------------------------------------------
for (int i = 1; i <= 5; i++) {
    if (i == 3)
        continue;
    cout << i << " ";
}
--------------------------------------------------------

--------------------------------------------------------
5. goto STATEMENT
--------------------------------------------------------
- Transfers control to a labeled statement.
- Allows jumping forward or backward in a program.

Syntax:
--------------------------------------------------------
goto label;

label:
    // statement
--------------------------------------------------------

Example:
--------------------------------------------------------
int i = 1;

start:
cout << i << " ";
i++;

if (i <= 5)
    goto start;
--------------------------------------------------------

Note:
- Excessive use of goto makes code hard to read.
- Generally discouraged in modern programming.

--------------------------------------------------------
6. return STATEMENT
--------------------------------------------------------
- Transfers control back to the calling function.
- Can optionally return a value.

Syntax:
--------------------------------------------------------
return;
return value;
--------------------------------------------------------

Example:
--------------------------------------------------------
int add(int a, int b) {
    return a + b;
}
--------------------------------------------------------

--------------------------------------------------------
7. COMPARISON OF JUMP STATEMENTS
--------------------------------------------------------
break     → exits loop or switch
continue  → skips current loop iteration
goto      → jumps to labeled statement
return    → exits function

--------------------------------------------------------
8. IMPORTANT NOTES
--------------------------------------------------------
- break and continue cannot be used outside loops
  (except break in switch-case).
- goto should be avoided unless absolutely necessary.
- return ends function execution immediately.
- Proper use of jump statements improves control flow.

--------------------------------------------------------
9. SUMMARY
--------------------------------------------------------
- Jump statements alter normal program flow.
- break and continue control loop execution.
- goto allows unconditional jumps.
- return exits functions and returns control.

========================================================
                END OF NOTES
========================================================
*/
