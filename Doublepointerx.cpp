#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;
    int** pp = &p;

    **pp = 200;

    cout << x << endl;
    return 0;
}
