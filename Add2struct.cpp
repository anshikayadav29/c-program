#include <iostream>
using namespace std;

struct Number {
    int x;
};

int main() {
    Number n1, n2;
    cin >> n1.x >> n2.x;

    cout << n1.x + n2.x;
    return 0;
}
