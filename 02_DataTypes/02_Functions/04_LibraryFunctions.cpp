//Library Functions are used inside main function.
#include <iostream>
#include <cmath>
using namespace std;

//sqrt(), cbrt(), min(), max(), pow(a,b) - a^b

int main()
{
    double n;
    cout<<"Enter n: ";
    cin>>n;
    cout<< sqrt(n) <<endl;
    cout<< cbrt(n) <<endl;
    cout << max(2,4) <<endl;
    cout << min(3,9) <<endl;
    cout << pow(2,3) <<endl;
    return 0;
}
