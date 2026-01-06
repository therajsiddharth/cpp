#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number till Table will print: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << " ";
        }
        cout << "\n";
    }
}