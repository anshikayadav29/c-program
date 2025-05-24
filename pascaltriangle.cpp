#include <iostream>
using namespace std;
int fact(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}
int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}