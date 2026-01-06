#include <bits/stdc++.h>
using namespace std;

// Function to take user input
int Input(int &n)
{
    cout << "Enter n: ";
    cin >> n;
    return n;
}

// Function to calculate sum of whole numbers upto n (FOR loop)
int SumUptoN(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}

int main()
{
    int n;
    Input(n);
    cout << "Sum of whole numbers from 1 to " << n << " : "
         << SumUptoN(n) << endl;

    // Same sum using WHILE loop
    int i = 1, sumWhile = 0;
    while (i <= n)
    {
        sumWhile += i;
        i++;
    }
    cout << "Sum using while loop: " << sumWhile << endl;

    return 0;
}
