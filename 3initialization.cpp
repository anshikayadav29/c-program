#include <iostream>
using namespace std;
int main() {
    int arr[5] = {4, 1, 3, 7, 3}; 
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}