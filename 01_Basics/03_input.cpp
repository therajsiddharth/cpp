// Basics - Content of c++ file
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;

    //cin can take multiple inputs
    int a,b,c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "You entered: " << a << " " << b << " " << c << endl;

    // Handling string input
    string str;
    cout  << "Enter a string;";
    cin >> str; //Note that cin stops reading at white space
    cout << "You entered: " << str << endl;

    // To read a full line including spaces, use getline
    cin.ignore(); // to ignore the leftover newline character in the input buffer
    cout << "Enter a full line of text: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    // cin.get() used to read a single character including whitespaces like tab, space, newline etc.
    char ch;
    cout << "Enter a character: ";
    cin.get(ch);
    cout << "You entered: " << ch << endl;

    return 0;
}