#include <iostream>
using namespace std;

int countEven(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) count++;
    }
    return count;
}

int main() {
    int arr[5] = {1,2,3,4,6};
    cout << countEven(arr, 5);
    return 0;
}
