//Print numbers from 1 to n using loops.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " are:" << endl;

    // Using for loop
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // // Using while loop
    // int j = 1;
    // while (j <= n)
    // {
    //     cout << j << " ";
    //     j++;
    // }
    // cout << endl;

    // // Using do-while loop
    // int k = 1;
    // do
    // {
    //     cout << k << " ";
    //     k++;
    // } while (k <= n);
    // cout << endl;

    return 0;
}