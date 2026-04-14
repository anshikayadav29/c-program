#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int key = 4;
    int l = 0, r = 4;

    while(l <= r) {
        int mid = (l + r) / 2;

        if(arr[mid] == key) {
            cout << "Found";
            break;
        }
        else if(arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
}
