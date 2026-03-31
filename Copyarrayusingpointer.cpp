#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4};
    int arr2[4];

    int* p1 = arr1;
    int* p2 = arr2;

    for(int i = 0; i < 4; i++) {
        *(p2 + i) = *(p1 + i);
    }

    for(int i = 0; i < 4; i++)
        cout << arr2[i] << " ";

    return 0;
}
