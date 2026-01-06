#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter total number of terms: ";
    cin >> N;

    int p, q;
    int ap, aq;
    
    cout << "Enter position p and its value: ";
    cin >> p >> ap;

    cout << "Enter position q and its value: ";
    cin >> q >> aq;

    // Calculate common difference
    int d = (aq - ap) / (q - p);

    cout << "\nCompleted AP:\n";

    // Print AP directly (no array used)
    for (int i = 1; i <= N; i++) {
        int term = ap + (i - p) * d;
        cout << term << " ";
    }

    return 0;
}
