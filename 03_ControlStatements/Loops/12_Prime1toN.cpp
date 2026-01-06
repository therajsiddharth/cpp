// WAP to count prime numbers from 1 to n
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;

    cout << "Enter value of n: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
            count++;
    }

    cout << "Number of prime numbers between 1 and " << n << " is: " << count;

    return 0;
}
