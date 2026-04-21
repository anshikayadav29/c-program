#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1,3,4,2,2};
    set<int> s;

    for(int x : arr) {
        if(s.count(x)) {
            cout << x;
            break;
        }
        s.insert(x);
    }
}
