#include <iostream>
using namespace std;

void printOdd(int n) {
    if(n == 0) return;
    printOdd(n - 1);
    if(n % 2 != 0)
        cout << n << " ";
}

int main() {
    printOdd(10);
    return 0;
}
