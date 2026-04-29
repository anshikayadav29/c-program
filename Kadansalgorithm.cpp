#include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int curr = arr[0];
    int maxi = arr[0];

    for (int i = 1; i < n; i++) {
        curr = max(arr[i], curr + arr[i]);
        maxi = max(maxi, curr);
    }

    cout << maxi;
}
