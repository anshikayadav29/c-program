#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int last = arr[4];

    for(int i = 4; i > 0; i--)
        arr[i] = arr[i-1];

    arr[0] = last;

    for(int x : arr) cout << x << " ";
}
