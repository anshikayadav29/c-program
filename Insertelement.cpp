#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[5];
    int n=3, pos, val;

    for(int i=0;i<n;i++) cin >> a[i].x;

    cin >> pos >> val;

    for(int i=n;i>pos;i--)
        a[i] = a[i-1];

    a[pos].x = val;

    for(int i=0;i<=n;i++)
        cout << a[i].x << " ";

    return 0;
}
