#include <iostream>
using namespace std;

int main() {
    int n = 121, rev = 0, temp = n;

    while(n > 0) {
        int d = n % 10;
        rev = rev * 10 + d;
        n /= 10;
    }

    if(rev == temp) cout<<"Palindrome";
    else cout<<"Not";
}
