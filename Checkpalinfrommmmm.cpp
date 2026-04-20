
#include <iostream>
using namespace std;

int main() {
    int n = 121, rev = 0, temp = n;
    while(n > 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    cout << (temp == rev);
}
