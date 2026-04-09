#include <iostream>
using namespace std;

int minNum(int a, int b) {
    if(a < b) return a;
    else return b;
}

int main() {
    cout << minNum(10, 5);
}
