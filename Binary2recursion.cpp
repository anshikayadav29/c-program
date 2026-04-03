#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int key) {
    if(l > r) return -1;

    int mid = (l + r) / 2;

    if(arr[mid] == key) return mid;
    else if(arr[mid] > key)
        return binarySearch(arr, l, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, r, key);
}

int main() {
    int arr[] = {1,2,3,4,5};
    cout << binarySearch(arr, 0, 4, 4);
    return 0;
}
