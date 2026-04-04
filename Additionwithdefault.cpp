#include <iostream>
using namespace std;

void add(int a, int b = 5) {
    cout << a + b;
}

int main() {
    add(10);
}
