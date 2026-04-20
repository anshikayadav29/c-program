#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 153, sum = 0, temp = n;

    while(n > 0) {
        int d = n % 10;
        sum += pow(d, 3);
        n /= 10;
    }
    cout << (sum == temp);
}
