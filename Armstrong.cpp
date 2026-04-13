#include <iostream>
using namespace std;

int main() {
    int n = 153, temp = n, sum = 0;

    while(n > 0) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }

    if(sum == temp) cout << "Armstrong";
    else cout << "Not Armstrong";
}
