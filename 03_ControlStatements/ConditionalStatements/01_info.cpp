/*
========================================================
          CONDITIONAL STATEMENTS IN C++
========================================================

--------------------------------------------------------
1. INTRODUCTION
--------------------------------------------------------
Conditional statements are used to execute different
blocks of code based on whether a given condition
evaluates to true or false.

They help control the flow of a program and allow
decision-making at runtime.

--------------------------------------------------------
2. TYPES OF CONDITIONAL STATEMENTS
--------------------------------------------------------
1. if Statement
2. if-else Statement
3. Nested if Statement
4. switch-case Statement
5. Ternary Operator (?:)

--------------------------------------------------------
3. if STATEMENT
--------------------------------------------------------
- Executes a block of code only if the condition is true.
- If the condition is false, the block is skipped.

Syntax:
--------------------------------------------------------
if (condition) {
    // code executed when condition is true
}
--------------------------------------------------------

--------------------------------------------------------
4. if-else STATEMENT
--------------------------------------------------------
- Executes one block if the condition is true.
- Executes another block if the condition is false.

Syntax:
--------------------------------------------------------
if (condition) {
    // code executed when condition is true
} else {
    // code executed when condition is false
}
--------------------------------------------------------

--------------------------------------------------------
5. NESTED if STATEMENT
--------------------------------------------------------
- An if statement placed inside another if or else block.
- Used when multiple conditions must be checked in steps.

Syntax:
--------------------------------------------------------
if (condition1) {
    if (condition2) {
        // code executed when both conditions are true
    }
} else {
    // code executed when condition1 is false
}
--------------------------------------------------------

--------------------------------------------------------
6. switch-case STATEMENT
--------------------------------------------------------
- Used to test a variable against multiple constant values.
- Works best when comparing a single variable for equality.
- Each case must end with a break statement.

Syntax:
--------------------------------------------------------
switch (variable) {
    case value1:
        // code executed if variable == value1
        break;

    case value2:
        // code executed if variable == value2
        break;

    default:
        // code executed if no case matches
        break;
}
--------------------------------------------------------

--------------------------------------------------------
7. TERNARY OPERATOR (?:)
--------------------------------------------------------
- Shorthand form of if-else.
- Used for simple conditional assignments.
- Returns one of two expressions based on a condition.

Syntax:
--------------------------------------------------------
variable = condition ? expression1 : expression2;
--------------------------------------------------------

--------------------------------------------------------
8. NESTED TERNARY OPERATOR
--------------------------------------------------------
- Used when more than two conditions are required.
- Should be used carefully to maintain readability.

Syntax:
--------------------------------------------------------
variable = condition1 ? expression1 :
           (condition2 ? expression2 : expression3);
--------------------------------------------------------

--------------------------------------------------------
9. IMPORTANT NOTES
--------------------------------------------------------
- Conditions must evaluate to a boolean value (true or false).
- Always use curly braces `{}` for clarity and safety.
- switch-case does not work with floating-point values.
- Ternary operators are best for short and simple logic.
- For complex logic, prefer if-else or nested if.

--------------------------------------------------------
10. SUMMARY
--------------------------------------------------------
- if / if-else → Flexible and widely used
- Nested if → Multiple condition checks
- switch-case → Cleaner alternative for equality checks
- Ternary operator → Compact replacement for simple if-else

========================================================
                END OF NOTES
========================================================
*/