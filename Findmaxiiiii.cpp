#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int mx = arr[0];
    for(int i = 1; i < 5; i++)
        mx = max(mx, arr[i]);
    cout << mx;
}
