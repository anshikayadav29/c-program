#include <iostream>
using namespace std;

void power(int base, int exp = 2) {
    int result = 1;
    for(int i = 0; i < exp; i++)
        result *= base;
    cout << result;
}

int main() {
    power(5);
}
