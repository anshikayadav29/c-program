#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;
    int* p1 = &a;
    int* p2 = &b;

    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2;

    cout << a << " " << b;
    return 0;
}
