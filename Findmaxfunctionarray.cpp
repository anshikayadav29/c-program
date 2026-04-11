#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
    }
    return max;
}

int main() {
    int arr[5] = {10, 50, 20, 5, 30};
    cout << findMax(arr, 5);
    return 0;
}
