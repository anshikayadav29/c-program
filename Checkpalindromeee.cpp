#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool isPalindrome(int n) {
    return n == reverse(n);
}

int main() {
    cout << isPalindrome(121);
}
