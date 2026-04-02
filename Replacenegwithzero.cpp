#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1,2,-3,4};
    int* p = arr;

    for(int i = 0; i < 4; i++) {
        if(*(p + i) < 0)
            *(p + i) = 0;
    }

    for(int i = 0; i < 4; i++)
        cout << arr[i] << " ";

    return 0;
}
