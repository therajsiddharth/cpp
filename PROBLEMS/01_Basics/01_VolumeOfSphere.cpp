//Calculate Volume of a Sphere
#include <iostream>
using namespace std;
int main()
{
    //Volume of sphere = (4/3)*pi*r^3
    const double pi = 3.14159265359;
    float r;
    cout<<"Enter radius of Sphere: ";
    cin>>r;
    cout <<fixed << "Volume of Sphere: "<< (4.0/3)*pi*r*r*r;
    return 0;
}