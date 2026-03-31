#include <iostream>
using namespace std;

int main() {
    int n = 1234;
    int* p = &n;
    int sum = 0;

    while(*p > 0) {
        sum += (*p % 10);
        *p /= 10;
    }

    cout << sum;
    return 0;
}
