#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter n: ";
    cin>>n;

    //Pattern 1
    //  Enter n: 3
    //              1 2 3
    //              1 2 3
    //              1 2 3
    for (int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }

    cout<<endl;

    //Pattern 2
    //           1 1 1
    //           2 2 2
    //           3 3 3
    for (int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<" "<<i;
        }
        cout<<endl;
    }
    return 0;
}