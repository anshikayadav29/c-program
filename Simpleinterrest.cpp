#include <iostream>
using namespace std;

void interest(int p, int r = 5, int t = 2) {
    cout << (p * r * t) / 100;
}

int main() {
    interest(1000);
}
