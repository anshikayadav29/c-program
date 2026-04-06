#include <iostream>
using namespace std;

void check(int num = 10) {
    if(num % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
}

int main() {
    check();
}
