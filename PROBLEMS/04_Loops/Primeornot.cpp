#include <bits/stdc++.h>
using namespace std;

// Function to take user input
int Input(int &n)
{
    cout << "Enter n: ";
    cin >> n;
    return n;
}

int main()
{
    int n;
    Input(n);
    // Edge case for 0, 1 and negative numbers
    if (n <= 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }
    // Edge case for 2
    if (n == 2) {
        cout << "Even Prime";
        return 0;
    }
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            if(i==1)
            cout << "Prime ";
            else
            cout<<"Composite";
            break;
        }
    }
    /*
    bool isPrime = true;

    if (n <= 1)
        isPrime = false;
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    } 

    cout << (isPrime ? "Prime Number" : "Not a Prime Number");
    */
    return 0;
}
