#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[2], b[2], c[4];

    for(int i=0;i<2;i++) cin >> a[i].x;
    for(int i=0;i<2;i++) cin >> b[i].x;

    for(int i=0;i<2;i++) c[i] = a[i];
    for(int i=0;i<2;i++) c[i+2] = b[i];

    for(int i=0;i<4;i++) cout << c[i].x << " ";

    return 0;
}
