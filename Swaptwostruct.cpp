#include <iostream>
using namespace std;

struct Data {
    int x;
};

int main() {
    Data d1, d2;
    cin >> d1.x >> d2.x;

    Data temp = d1;
    d1 = d2;
    d2 = temp;

    cout << d1.x << " " << d2.x;
    return 0;
}
