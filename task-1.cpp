#include <iostream>

using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation to perform:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter the corresponding number for the operation: ";
    cin >> operation;

    
    switch (operation) {
        case '1':
            result = num1 + num2;
            break;
        case '2':
            result = num1 - num2;
            break;
        case '3':
            result = num1 * num2;
            break;
        case '4':
            if (num2 == 0) {
                cout << "Error: Cannot divide by zero." << endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}