#include <iostream>
using namespace std;

int rev(int n, int r = 0) {
    if(n == 0) return r;
    return rev(n/10, r*10 + n%10);
}

int main() {
    int n = 121;
    if(n == rev(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
}
