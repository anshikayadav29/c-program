#include <iostream>
using namespace std;

bool search(int arr[], int n, int key) {
    if(n == 0) return false;
    if(arr[n-1] == key) return true;
    return search(arr, n-1, key);
}

int main() {
    int arr[] = {1,2,3,4};
    cout << search(arr, 4, 3);
    return 0;
}
