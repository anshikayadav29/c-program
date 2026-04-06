#include <iostream>
using namespace std;

void table(int n = 2) {
    for(int i = 1; i <= 5; i++)
        cout << n * i << " ";
}

int main() {
    table();
}
