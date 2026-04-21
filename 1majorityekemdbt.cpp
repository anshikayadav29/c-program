#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,2,1,1,2,2,2};
    int count = 0, candidate;

    for(int x : arr) {
        if(count == 0) candidate = x;
        count += (x == candidate) ? 1 : -1;
    }
    cout << candidate;
}
