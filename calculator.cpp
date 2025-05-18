#include <iostream>
using namespace std;

void add(float a, float b) {
    cout << "Result: " << a + b << endl;
}

void subtract(float a, float b) {
    cout << "Result: " << a - b << endl;
}

void multiply(float a, float b) {
    cout << "Result: " << a * b << endl;
}

void divide(float a, float b) {
    if (b != 0)
        cout << "Result: " << a / b << endl;
    else
        cout << "Error: Division by zero is not allowed!" << endl;
}

int main() {
    int choice;
    float num1, num2;
    char cont;

    do {
        cout << "\n===== Simple Calculator =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1: add(num1, num2); break;
            case 2: subtract(num1, num2); break;
            case 3: multiply(num1, num2); break;
            case 4: divide(num1, num2); break;
            default: cout << "Invalid choice!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
