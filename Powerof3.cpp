#include <iostream>
using namespace std;

int main() {
    int n = 27;

    while(n > 1 && n % 3 == 0) {
        n /= 3;
    }

    if(n == 1) cout<<"Yes";
    else cout<<"No";
}
