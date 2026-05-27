#include <iostream>
using namespace std;

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}

float divi(float a, float b) {
    return a / b;
}

int main() {
    float a, b;
    char op;

    cout << "Enter Expression: ";
    cin >> a >> op >> b;

    switch(op) {
        case '+':
            cout << add(a,b);
            break;

        case '-':
            cout << sub(a,b);
            break;

        case '*':
            cout << mul(a,b);
            break;

        case '/':
            cout << divi(a,b);
            break;
    }

    return 0;
}
