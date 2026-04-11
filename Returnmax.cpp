#include <iostream>
using namespace std;

int maxNum(int a, int b) {
    if (a > b) return a;
    else return b;
}

int main() {
    cout << maxNum(10, 20);
    return 0;
}
