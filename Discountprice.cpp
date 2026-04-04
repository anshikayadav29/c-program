#include <iostream>
using namespace std;

void price(int p, int discount = 10) {
    cout << p - (p * discount / 100);
}

int main() {
    price(1000);
}
