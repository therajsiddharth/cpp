// WAP to find HCF and LCM of more than two numbers
#include <iostream>
using namespace std;

// Function to find HCF of two numbers
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hcf = arr[0];
    int lcm = arr[0];

    for (int i = 1; i < n; i++) {
        hcf = findHCF(hcf, arr[i]);
        lcm = (lcm * arr[i]) / findHCF(lcm, arr[i]);
    }

    cout << "HCF = " << hcf << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}
