#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[3];

    for(int i=0;i<3;i++)
        cin >> a[i].x;

    for(int i=2;i>=0;i--)
        cout << a[i].x << " ";

    return 0;
}
