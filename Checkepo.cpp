#include <iostream>
using namespace std;

void check(int n = 0) {
    if(n >= 0)
        cout << "Positive";
    else
        cout << "Negative";
}

int main() {
    check();
}
