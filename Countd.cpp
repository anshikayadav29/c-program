#include <iostream>
using namespace std;

int main() {
    int n = 12345, count = 0;

    while(n > 0) {
        count++;
        n /= 10;
    }

    cout << count;
}
