#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,5};
    int n = 5;

    int xor1 = 0, xor2 = 0;

    for(int i=1;i<=n;i++) xor1 ^= i;
    for(int i=0;i<n-1;i++) xor2 ^= arr[i];

    cout << (xor1 ^ xor2);
}
