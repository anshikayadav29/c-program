#include <iostream>
using namespace std;

int search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int arr[5] = {10,20,30,40,50};
    cout << search(arr, 5, 30);
    return 0;
}
