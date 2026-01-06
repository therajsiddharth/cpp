// WAP to find HCF and LCM of two numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y, hcf, lcm;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    x = a;
    y = b;

    // Euclidean Algorithm for HCF
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    lcm = (a * b) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
