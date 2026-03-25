#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[3];
    int sum=0;

    for(int i=0;i<3;i++) {
        cin >> a[i].x;
        sum += a[i].x;
    }

    cout << sum;
    return 0;
}
