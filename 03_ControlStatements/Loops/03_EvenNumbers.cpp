//Print all the even numbers from 1 to n using for loop.
#include <iostream>
using namespace std;
int main()
{
    // cout << "Even numbers from 1 to " << "100" << " are:" << endl;

    // Method 1 << 100 times loop is running
    // for (int i = 1; i<= 100; i++){
    //     if (i%2==0){
    //         cout << i<< " ";
    //     }
    // }
    // cout <<endl <<endl;

    //Method 2 << 50 times loop running
    // for (int i = 2; i<=100; i+=2){
    //     cout << i<< " ";
    // }
    // cout<<endl <<endl;
    //Generalise with n
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    cout << "Even numbers from 1 to " << n << " are:" << endl;

    //Method 1 << n times loop is running
    for (int i = 1; i<= n; i++){
        if (i%2==0){
            cout << i<< " ";
        }
    }
    cout <<endl <<endl;

    //Method 2 << n/2 times loop running
    // for (int i = 2; i<=n; i+=2){
    //     cout << i<< " ";
    // }
    
    return 0;
}