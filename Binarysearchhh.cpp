#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int key = 7, l = 0, r = 4;

    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == key) {
            cout << mid;
            return 0;
        }
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    cout << -1;
}
