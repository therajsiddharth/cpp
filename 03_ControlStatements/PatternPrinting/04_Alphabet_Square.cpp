#include <iostream>
using namespace std;

int main()
{
    // for (char i = 'A'; i <= 'D'; i++)
    // {
    //     for (char j = 'A'; j <= 'D'; j++)
    //     {
    //         cout << " " << j;
    //     }
    //     cout << endl;
    // }
    int n, m;

    // Pattern printing - UpperCase
    // n=4          //n=3
    // A B C D        A B C
    // A B C D        A B C
    // A B C D        A B C
    // A B C D
    cout << "Enter the side of square (1–26): ";
    cin >> n;

    // Edge case checks
    if (n <= 0)
    {
        cout << "Invalid input! Size must be positive.";
        return 0;
    }

    if (n > 26)
    {
        cout << "Invalid input! Maximum allowed value is 26.";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }

    // Pattern printing - UpperCase
    // n=4             //n=3
    //      a b c d          a b c 
    //      a b c d          a b c 
    //      a b c d          a b c 
    //      a b c d

    cout << "Enter the side of square (1–26): ";
    cin >> m;

    // Edge case checks
    if (m <= 0)
    {
        cout << "Invalid input! Size must be positive.";
        return 0;
    }

    if (m > 26)
    {
        cout << "Invalid input! Maximum allowed value is 26.";
        return 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << char(j + 96) << " ";
        }
        cout << endl;
    }

    return 0;
}
