#include <iostream>
using namespace std;

int rev(int n, int r=0) {
    if(n == 0) return r;
    return rev(n/10, r*10 + n%10);
}

int main() {
    int n;
    cin >> n;
    if(n == rev(n))
        cout << "Palindrome";
    else
        cout << "Not";
    return 0;
}
