#include <iostream>
using namespace std;

void printChar(char ch = '*', int n = 5) {
    for(int i=0;i<n;i++)
        cout << ch;
}

int main() {
    printChar();
}
