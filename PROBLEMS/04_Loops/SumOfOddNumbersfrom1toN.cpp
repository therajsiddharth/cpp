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
    int Oddsum = 0;
    for (int i = 1; i <= n; i+=2)
    {
        Oddsum += i;
    }
    return Oddsum;
}

int main()
{
    int n;
    Input(n);
    cout << "Sum of whole odd numbers from 1 to " << n << " : "
         << SumUptoN(n) << endl;
    return 0;
}
