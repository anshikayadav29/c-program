#include <iostream>
using namespace std;

void discount(int price, int d = 5) {
    cout << price - (price * d / 100);
}

int main() {
    discount(2000);
}
