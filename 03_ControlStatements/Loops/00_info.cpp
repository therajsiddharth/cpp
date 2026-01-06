/*
LOOPS >> Repetitive Control Statements
1) For Loop
2) While Loop
3) Do While Loop
4) Break and Continue
5) Pattern Printing Problems
6) Infinite Loop
7) Nested Loops
8) For-each Loop
*/
//Note : Use Ctrl + C to terminate an infinite loop in terminal/console.

//In C++, loops are used to execute a block of code repeatedly until a specified condition is met. There are three primary types of loops in C++: for loop, while loop, and do-while loop.
//1) For Loop : Used when the number of iterations is known beforehand. It consists of initialization, condition, and update in a single line.
/*
for (initialization; condition; update){
    //Blockk of code to be executed
}
*/  
//2) While Loop : Used when the number of iterations is not known beforehand. It checks the condition before executing the block of code.
/*
initialization;
while (condition){
    //Block of code to be executed
    update;
}
*/
//3) Do While Loop : Similar to while loop, but it checks the condition after executing the block of code. This ensures that the block is executed at least once.
/*
initialization;
do{
    //Block of code to be executed
    update;
}while(condition);
*/
//4) Break and Continue : 'break' is used to exit a loop prematurely, while 'continue' skips the current iteration and proceeds to the next iteration of the loop.
//5) Pattern Printing Problems : Loops are often used to print various patterns using nested loops.
//6) Infinite Loop : A loop that runs indefinitely until externally terminated. This can be created using loops with conditions that always evaluate to true.
//7) Nested Loops : A loop inside another loop. The inner loop completes all its iterations for each iteration of the outer loop.
//Example programs for each type of loop can be found in the respective files in this directory.