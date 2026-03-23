#include <iostream>
using namespace std;

struct Data {
    int x;
};

int main() {
    Data d1, d2;
    cin >> d1.x;

    d2 = d1;

    cout << d2.x;
    return 0;
}
