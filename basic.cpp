#include <iostream>
using namespace std;

int main()
{
    cout << "Ashwin" << endl;
    cout << "Ashwin" << endl << "Late" << endl;
    cout << '\n';
    cout << "This is the first Code in C++";

    // Datatypes and Size of Datatypes

    // int -> 4 bytes
    int num = 50;
    cout << num << endl;

    cout << sizeof(num) << endl;

    //    character -> 1 bytes
    char ch = 'r';
    cout << ch << endl;
    cout << sizeof(ch) << endl;

    // float -> 4 byte
    float point = 1.65;
    cout << point << endl;
    cout << sizeof(point) << endl;

    //  long -> 4 byte
    long number = 2354682;
    cout << number << endl;
    cout << sizeof(number) << endl;

    // double -> 8 bytes

    double point1 = 12.64584;
    cout << point1 << endl;
    cout << sizeof(point1) << endl;

    // Garbage value

    int num;
    cout << endl
         << num;

    // Arithmetic Operator -> +, -, *, /, %

    int a = 45;
    int b = 5;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    float a = 5;
    int b = 45;

    cout << a / b << endl;

    // Relational Operator

    int num = 24;
    int num1 = 20;

    cout << (num > num1) << endl;
    cout << (num < num1) << endl;
    cout << (num >= num1) << endl;
    cout << (num <= num1) << endl;
    cout << (num == num1) << endl;
    cout << (num != num1) << endl;

    // Logical Operator

    int age = 34;
    int car = 12;

    if (age >= 18 || car >= 1)
    {
        cout << "Licence milega Ji..." << endl;
    }

    int a = 0;
    int b = 23;

    cout << (a && b) << endl;
    cout << !a << endl;
    cout << !b << endl;

    // Input

    int marks;
    cout << "Enter the marks here: ";
    cin >> marks;
    cout << "Printing marks is: " << marks << endl;

    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    cout << "Character is " << ch << endl;

    return 0;
}