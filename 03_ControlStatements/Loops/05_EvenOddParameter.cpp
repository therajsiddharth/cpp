#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "Even numbers between " << start << " and " << end << " are:\n";

    // Handle both increasing and decreasing ranges
    if (start <= end) {
        for (int i = start; i <= end; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    } else {
        for (int i = start; i >= end; i--) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    }

    return 0;
}
