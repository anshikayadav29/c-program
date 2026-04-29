#include <iostream>
using namespace std;

long long power(long long a, long long b) {
    long long ans = 1;

    while (b > 0) {
        if (b % 2)
            ans *= a;

        a *= a;
        b /= 2;
    }

    return ans;
}

int main() {
    cout << power(2, 10);
}
