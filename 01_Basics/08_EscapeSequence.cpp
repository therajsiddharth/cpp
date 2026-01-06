#include<iostream>
using namespace std;
int main(){
    // 1.\n - New Line
    cout << "Hello World!\nWelcome to C++ Programming." << endl;
    // 2.\t - Tab Space
    cout << "Item\tQuantity\tPrice" << endl;
    cout << "Apple\t2\t\t$3" << endl;
    cout << "Banana\t5\t\t$2" << endl;
    // 3.\\ - Backslash
    cout << "This is a backslash: \\" << endl;
    // 4.\" - Double Quote 
    cout << "He said, \"C++ is awesome!\"" << endl;
    // 5.\' - Single Quote
    cout << "It\'s a beautiful day!" << endl;
    // 6.\r - Carriage Return
    cout << "12345\rABCDE" << endl; // Output will be ABCDE45
    // 7.\b - Backspace
    cout << "Hello\b World!" << endl; // Output will be Hell World!
    // 8.\f - Form Feed
    cout << "Hello\fWorld!" << endl; // Form feed may not show visible effect
    // 9.\a - Alert (Bell)
    cout << "Alert!\a" << endl; // May produce a sound on some systems
    // 10.\v - Vertical Tab
    cout << "Hello\vWorld!" << endl; // Vertical tab may not show visible effect
    //11. \\0 - Null Character
    cout << "Hello\0World!" << endl; // Output will be Hello
    // Note: The effects of some escape sequences like \f, \a, and \v may vary depending on the system and console used.
    return 0;
}