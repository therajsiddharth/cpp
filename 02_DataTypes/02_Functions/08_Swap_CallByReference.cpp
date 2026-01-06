#include <iostream>
using namespace std;

void swap(int &a, int &b) //Call by reference //Here we took address of x,y in the parameter for extending its scope.
{
    int temp = a;
    a = b;
    b = temp;
    cout << "The value of num1 after swapping is: " << a << endl;
    cout << "The value of num2 after swapping is: " << b << endl;
}

int main()
{

    int x, y;
    cout << "Enter num1: ";
    cin >> x;
    cout << "Enter num2: ";
    cin >> y;

    swap(x, y);
    return 0;
}
