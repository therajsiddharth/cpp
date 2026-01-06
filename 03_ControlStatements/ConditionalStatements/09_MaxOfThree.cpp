//Ques : Take 3 positive Integers input and print the greatest of them.
#include<iostream>
#include<algorithm> //for std::max [STL library function]
#include<functional> //for std::function [for lambda recursion]
using namespace std;
int main()
{
    //Method 1
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "The greatest number is: " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "The greatest number is: " << b << endl;
    }
    else
    {
        cout << "The greatest number is: " << c << endl;
    }

    //Method 2 >> Using nested if
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;

    if (a >= b)
    {
        if (a >= c)
        {
            cout << "The greatest number is: " << a << endl;
        }
        else
        {
            cout << "The greatest number is: " << c << endl;
        }
    }
    else
    {
        if (b >= c)
        {
            cout << "The greatest number is: " << b << endl;
        }
        else
        {
            cout << "The greatest number is: " << c << endl;
        }
    }
    //Method 3 >> Using Ternary Operator
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;
    int max = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    cout << "The greatest number is: " << max << endl;

    //Method 4 >> Using STL library function
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;
    int max = std::max({a, b, c});
    cout << "The greatest number is: " << max << endl;

    //Method 5 >> Using array and loop
    int nums[3];
    cout << "Enter three positive integers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    int max = nums[0];
    for (int i = 1; i < 3; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    cout << "The greatest number is: " << max << endl;

    //Method 6 >> Using sorting
    int nums[3];
    cout << "Enter three positive integers: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    std::sort(nums, nums + 3);
    cout << "The greatest number is: " << nums[2] << endl;

    //Method 7 >> Using pointers
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;
    int* maxPtr = &a;
    if (b > *maxPtr)
    {
        maxPtr = &b;
    }
    if (c > *maxPtr)
    {
        maxPtr = &c;
    }
    cout << "The greatest number is: " << *maxPtr << endl;

    //Method 8 >> Using functions
    auto maxOfThree = [](int x, int y, int z) {
        if (x >= y && x >= z) return x;
        else if (y >= x && y >= z) return y;
        else return z;
    };
    int a, b, c;
    cout << "Enter three positive integers: ";  
    cin >> a >> b >> c;
    cout << "The greatest number is: " << maxOfThree(a, b, c) << endl;

    //Method 9 >> Using recursion [lambda function]
    function<int(int, int, int)> maxOfThreeRec = [&](int x, int y, int z) {
        if (x >= y && x >= z) return x;
        else if (y >= x && y >= z) return y;
        else return z;
    };
    int a, b, c;
    cout << "Enter three positive integers: ";
    cin >> a >> b >> c;
    cout << "The greatest number is: " << maxOfThreeRec(a, b, c) << endl;


    return 0;
}