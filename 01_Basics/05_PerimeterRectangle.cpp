#include <iostream>
using namespace std;
int main(){
    int length, width;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    double perimeter = 2 * (length + width);

    cout << "The perimeter of the rectangle with length " << length << " and width " << width << " is " << perimeter << endl;
    return 0;
}