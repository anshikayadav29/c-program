#include <iostream>
using namespace std;

void power(int base, int exp = 3) {
    int res = 1;
    for(int i=0;i<exp;i++)
        res *= base;
    cout << res;
}

int main() {
    power(2);
}
