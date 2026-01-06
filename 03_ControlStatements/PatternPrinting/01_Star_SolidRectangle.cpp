// Note : Use Ctrl + C to terminate an infinite loop in terminal/console.
//Rules to print any pattern
//1. Outer loop counts the no. of lines.
//2. Inner loop is for the cols, focus to somehow connct with rows.
//3. Print inside the inner loop.
//4. Observe Symmetry


#include <iostream>
using namespace std;
int main()
{
    // cout<< "*****"<<endl;
    // cout<< "*****"<<endl;
    // cout<< "*****"<<endl;

    // rectangle
    // rows -> m, cols ->n
    int m, n;
    cout << "Enter no. of rows: ";
    cin >> m;
    cout << "Enter no. of columns: ";
    cin >> n;

    for(int i=1; i<=m; i++){ // rows = m
        for(int j=1; j<=n; j++){ // cols = n
            cout<<"* ";
        } 
        cout<<endl;
    }
    return 0;
}