#include <iostream>
using namespace std;

// Function with two int parameters
int add(int a, int b) {
    return a + b;
}

// Function with three int parameters
int add(int a, int b, int c) {
    return a + b + c;
}

// Function with two double parameters
double add(double a, double b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;        // calls add(int, int)
    cout << add(1, 2, 3) << endl;     // calls add(int, int, int)
    cout << add(2.5, 3.5) << endl;    // calls add(double, double)

    return 0;
}
/*NOTE: Function Overloading
✔ Different number of parameters
✔ Different data types
✔ Different order of parameters
✖ Return type alone is not enough
*/