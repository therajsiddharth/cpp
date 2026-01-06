//Ques1: Printing Hello World 5 times using For,while,do-while Loops
#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Hello World!" << endl;
    }

    int j = 0; //initialization
    while (j < 5) //condition
    {
        cout << "Hello World!" << endl;
        j++; //update
    }
    
    int k = 0; //initialization
    do
    {
        cout << "Hello World!" << endl;
        k++; //update
    } while (k < 5); //condition

    return 0;
}