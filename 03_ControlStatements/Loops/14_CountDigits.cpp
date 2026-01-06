// Ques : Take a positive integer input and print the number of digits in that number.
#include <iostream>
using namespace std;

int main()
{
    // -------- Method 1: Using division --------
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    cout << "Number of digits (Method 1): " << count << endl;

    // -------- Method 2: Using cin.get() --------
    cin.ignore();  // clear leftover newline

    char ch;
    int Count = 0;

    cout << "Enter a number again: ";
    cin.get(ch);

    while (ch != '\n') {
        Count++;
        cin.get(ch);
    }

    cout << "Number of digits (Method 2): " << Count << endl;

    return 0;
}
