#include <iostream>
using namespace std;

int* getValue() {
    static int x = 100;
    return &x;
}

int main() {
    int* p = getValue();

    cout << *p;
    return 0;
}
