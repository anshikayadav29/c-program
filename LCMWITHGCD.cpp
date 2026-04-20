#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a = 12, b = 15;
    cout << (a * b) / gcd(a, b);
}
