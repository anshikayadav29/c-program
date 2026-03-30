#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    int* p1 = &a;
    int* p2 = &b;

    if(*p1 > *p2)
        cout << "a is greater";
    else
        cout << "b is greater";

    return 0;
}
