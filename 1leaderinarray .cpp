#include <iostream>
using namespace std;

int main() {
    int arr[] = {16,17,4,3,5,2};
    int maxRight = arr[5];

    cout << maxRight << " ";
    for(int i = 4; i >= 0; i--) {
        if(arr[i] > maxRight) {
            maxRight = arr[i];
            cout << maxRight << " ";
        }
    }
}
