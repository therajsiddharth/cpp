// Note : Use Ctrl + C to terminate an infinite loop in terminal/console.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the side of square: ";
    cin >>n;
    for (int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cout <<"* ";
        }
        cout<<endl;
    }
    return 0;
}