#include <iostream>
using namespace std;

struct Num {
    int x;
};

int main() {
    Num a[3];
    int key;

    for(int i=0;i<3;i++) cin >> a[i].x;
    cin >> key;

    for(int i=0;i<3;i++) {
        if(a[i].x == key) {
            cout << "Found";
            return 0;
        }
    }

    cout << "Not Found";
    return 0;
}
