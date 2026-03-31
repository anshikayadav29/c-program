#include <iostream>
using namespace std;

void greet() {
    cout << "Hello!";
}

int main() {
    void (*ptr)() = greet;

    ptr(); // calling function

    return 0;
}
