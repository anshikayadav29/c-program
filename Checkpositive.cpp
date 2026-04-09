#include <iostream>
using namespace std;

int check(int n) {
    if(n > 0) return 1;
    else if(n < 0) return -1;
    else return 0;
}

int main() {
    cout << check(-5);
}
