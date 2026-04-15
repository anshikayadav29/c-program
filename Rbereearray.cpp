#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int l = 0, r = 4;

    while(l < r) {
        swap(arr[l], arr[r]);
        l++; r--;
    }

    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}
