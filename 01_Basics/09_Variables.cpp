#include <iostream>
using namespace std;
int main(){
    // Declare variables of different types
    int age = 25;
    float height = 5.9f;
    double weight = 70.5;
    char grade = 'A';
    bool isStudent = true;
    // Output the values of the variables
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;

    // Modify variable values
    age += 1; // Increment age by 1
    height += 0.1f; // Increase height by 0.1 feet
    weight -= 2.0; // Decrease weight by 2 kg
    grade = 'A'; // Update grade
    isStudent = false; // Update student status
    // Output the modified values
    cout << "\nAfter modifications:" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;

    // Demonstrate variable initialization
    int x; // Uninitialized variable
    cout << "\nUninitialized variable x has value: " << x << " (may be garbage value)" << endl;
    int y = 10; // Initialized variable
    cout << "Initialized variable y has value: " << y << endl;

    // Constant variable
    const float PI = 3.14159f;
    cout << "Constant PI value: " << PI << endl;
    // PI = 3.14f; // Uncommenting this line will cause a compilation error
    const int minutesInHour = 60;
    cout << "Minutes in an hour: " << minutesInHour << endl;

    // Demonstrate variable naming conventions
    int _validName1 = 100;
    int validName2 = 200;
    int $validName3 = 300; // Although valid, using $ is discouraged
    // int 2invalidName; // Uncommenting this line will cause a compilation error
    cout << "\nVariable Naming Conventions:" << endl;
    cout << "_validName1: " << _validName1 << endl;
    cout << "validName2: " << validName2 << endl;
    cout << "$validName3: " << $validName3 << endl;

    // Many variables of the same type
    int a = 1, b = 2, c = 3;
    cout << "\nMultiple Variables:" << endl;
    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    //Assigning value from one variable to another
    int m = 5;
    int n = m;
    cout << "\nAssigning value from one variable to another:" << endl;
    cout << "m: " << m << ", n: " << n << endl;

    //Math operations with variables
    int p = 10;
    int q = 3;
    cout << "\nMath Operations:" << endl;
    cout << "p: " << p << ", q: " << q << endl;
    cout << "p + q = " << (p + q) << endl;
    cout << "p - q = " << (p - q) << endl;
    cout << "p * q = " << (p * q) << endl;
    cout << "p / q = " << (p / q) << endl;
    cout << "p % q = " << (p % q) << endl;

    // Using variables in expressions
    int result = (a + b) * c;
    cout << "\nUsing variables in expressions:" << endl;
    cout << "(a + b) * c = " << result << endl;


    return 0;
}