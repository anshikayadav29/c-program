#include <iostream>
using namespace std;

void printNum(int n, int times = 3) {
    for(int i = 0; i < times; i++)
        cout << n << " ";
}

int main() {
    printNum(5);
}
