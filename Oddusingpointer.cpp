#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int* p = &x;

    if(*p % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
