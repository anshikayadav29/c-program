#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[3];
    int sum=0, count=0;

    for(int i=0;i<3;i++) {
        cin >> a[i].x;
        if(a[i].x % 2 == 0) {
            sum += a[i].x;
            count++;
        }
    }

    if(count != 0)
        cout << sum/count;

    return 0;
}
