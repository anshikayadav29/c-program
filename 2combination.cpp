#include <iostream>
using namespace std;
int factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    if (r > n) {
        cout << "Invalid input: r should be <= n";
        return 1;
    }
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "nCr = " << ncr << endl;

    return 0;
}
