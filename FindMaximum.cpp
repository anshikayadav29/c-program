#include <iostream>
using namespace std;

int maxVal(int arr[], int n) {
    if(n == 1) return arr[0];
    return max(arr[n-1], maxVal(arr, n-1));
}

int main() {
    int arr[] = {5, 9, 2, 7};
    cout << maxVal(arr, 4);
    return 0;
}
