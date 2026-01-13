// WAP to find HCF and LCM of more than two numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout<<arr[i] <<" ";
    }

    return 0;
}
