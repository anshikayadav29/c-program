#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    cout << power(2, 3);
    return 0;
}
