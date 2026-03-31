#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int* p = arr;
    int max = *p;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) > max) {
            max = *(p + i);
        }
    }

    cout << "Max = " << max;
    return 0;
}
