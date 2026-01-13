#include <iostream>
using namespace std;

int main() {

    string name;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    // Input
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks of 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Logic
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // Output
    cout << "\nStudent Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    // Result
    if (percentage >= 40)
        cout << "Result: PASS";
    else
        cout << "Result: FAIL";

    return 0;
}
