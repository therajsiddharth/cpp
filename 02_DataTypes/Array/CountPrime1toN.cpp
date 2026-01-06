// Count primes using Sieve of Eratosthenes
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    bool prime[n + 1];
    for (int i = 0; i <= n; i++)
        prime[i] = true;

    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            count++;

    cout << "Number of prime numbers: " << count;
    return 0;
}
