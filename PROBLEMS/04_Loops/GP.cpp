//Display this GP - 3,12,48,.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter nth term of GP - 1,2,4,8,16,32,...n: ";
    cin>>n;

    int a=3;
    for(int i=1; i<=n; i++){
        cout << a <<" ";
        a*=3;
    }
    return 0;
}