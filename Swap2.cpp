#include <iostream>
using namespace std;

int swapNum(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main() {
    int x = 5, y = 10;
    swapNum(x, y);
    cout << x << " " << y;
}
