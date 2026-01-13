#include <iostream>
using namespace std;

int main() {

    float originalPrice, discountPercent;
    float discountAmount, finalPrice;

    // Input
    cout << "Enter original price: ";
    cin >> originalPrice;

    cout << "Enter discount percentage: ";
    cin >> discountPercent;

    // Logic
    discountAmount = (originalPrice * discountPercent) / 100;
    finalPrice = originalPrice - discountAmount;

    // Output
    cout << "Discount Amount: " << discountAmount << endl;
    cout << "Final Price after Discount: " << finalPrice << endl;

    return 0;
}
