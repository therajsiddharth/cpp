//Ques2: Printing Hello World n times using For,while,do-while Loops by user input
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of times you want to print Hello World: ";
    cin >> n;

    /*for loop Syntax: 
    for (initialization; condition; update){
        //Blockk of code to be executed
    }
    */
    for (int i = 0; i < n; i++)
    {
        cout << "Hello World!" << endl;
    }

    /*while loop Syntax:
    initialization;
    while (condition){
        //Block of code to be executed
        update;
    }
    */
    int j = 0; //initialization
    while (j < n) //condition
    {
        cout << "Hello World!" << endl;
        j++; //update
    }
    /*do-while loop Syntax:
    initialization;
    do{
        //Block of code to be executed
        update;
    }while(condition);
    */
    int k = 0; //initialization
    do
    {
        cout << "Hello World!" << endl;
        k++; //update
    } while (k < n); //condition

    return 0;
}