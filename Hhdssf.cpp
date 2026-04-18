#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,3,20,4,1,0};
    int n = 6;

    for(int i=1;i<n-1;i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            cout << arr[i];
        }
    }
}
