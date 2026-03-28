#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;

    cout << p << endl;   // address
    cout << *p << endl;  // value

    return 0;
}
