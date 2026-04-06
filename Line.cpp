#include <iostream>
using namespace std;

void printLine(string text = "Hello", int n = 2) {
    for(int i=0;i<n;i++)
        cout << text << endl;
}

int main() {
    printLine();
}
