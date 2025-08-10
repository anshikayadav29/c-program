#include<iostream>
using namespace std;

int main() {
    int n1, n2;
    char op;
    cin >> n1;
    cin >> op;
    cin >> n2;
    switch (op) {
        case '+':
            cout << (n1 + n2) << endl;
            break;
        case '-':
            cout << (n1 - n2) << endl;
            break;
        case '*':
            cout << (n1 * n2) << endl;
            break;
        case '/':
            if(n2 != 0)
                cout << (n1 / n2) << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
