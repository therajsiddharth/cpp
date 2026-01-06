//*Ques : If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.
#include <iostream>
using namespace std;
int main()
{
    double costPrice, sellingPrice;
    cout << "Enter the cost price of the item: ";
    cin >> costPrice;
    cout << "Enter the selling price of the item: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice)
    {
        double profit = sellingPrice - costPrice;
        cout << "The seller has made a profit of: " << profit << endl;
    }
    else if (sellingPrice < costPrice)
    {
        double loss = costPrice - sellingPrice;
        cout << "The seller has incurred a loss of: " << loss << endl;
    }
    else
    {
        cout << "No profit no loss." << endl;
    }

    return 0;
}