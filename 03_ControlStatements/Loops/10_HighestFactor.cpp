//WAP to find the highest factor of a number ‘n’ (other than n itself)
//12 = 12,6,3,2,1 //Factors = numbers that is divisible
//Highest Factor other than n itself is 6.

#include<iostream>
using namespace std;
int main()
{
    //Method 1
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num < 0)
    {
        cout<<"Please enter a valid positive integer."<<endl;
        return 1; 
    }

    if (num == 0) {
        cout << "0 has infinitely many factors. Highest factor is undefined.";
        return 0;
    }

    if (num == 1) {
        cout << "1 has no factor other than itself.";
        return 0;
    }

    //int fact =1; //Storing the Highest Factor
    // for (int i=1; i<num;i++){
    //     if (num%i==0){
    //         fact=i; 
    //     }
    // }
    //cout<<"The Highest Factor of "<<num<<" is: "<<fact;

    //Method 2 - Better approach
    for (int i = num / 2; i >= 1; i--) {
        if (num % i == 0) {
            cout << "The Highest Factor of " << num << " is: " << i;
            break;
        }
    }
    return 0;
}