#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 8, 20};
    int n = 5, first = -1, second = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    cout << second;
}
