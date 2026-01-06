// WAP to check whether a number is Prime or Composite
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Edge cases
    if (n <= 1) {
        cout << "Neither Prime nor Composite";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime Number";
    else
        cout << "Composite Number";

    return 0;
}
