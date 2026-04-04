#include <iostream>
using namespace std;

void multiply(int a = 2, int b = 3) {
    cout << a * b;
}

int main() {
    multiply();
    multiply(4);
}
