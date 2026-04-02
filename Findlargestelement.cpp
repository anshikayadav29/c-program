#include <iostream>
using namespace std;

int main() {
    int arr[] = {11, 25, 7, 19};
    int* p = arr;
    int max = *p;

    for(int i = 1; i < 4; i++) {
        if(*(p + i) > max)
            max = *(p + i);
    }

    cout << max;
    return 0;
}
