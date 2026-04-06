#include <iostream>
using namespace std;

void salary(int base, int bonus = 1000) {
    cout << base + bonus;
}

int main() {
    salary(5000);
}
