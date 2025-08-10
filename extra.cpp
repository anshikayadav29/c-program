#include <iostream>
using namespace std;

int recursive_multiply(int a, int b) {
    
    if (a < b) swap(a, b);

    int sum = 0;
    while (b > 0) {
        
        if (b & 1) sum += a;
        a <<= 1;
        b >>= 1;
    }
    return sum;
}

int main() {
    int a = 100, b = 24;
    cout << recursive_multiply(a, b) << endl; // Output: 2400
    return 0;
}