#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient;

    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        cout << "Division by zero is not allowed." << endl;
        return 1; 
    }

    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << difference << endl;
    cout << "Multiplication: " << product << endl;
    cout << "Division: " << quotient << endl;

    return 0;
}
