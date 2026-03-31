#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 3, 6, 1, 9};
    int* p = arr;
    int min = *p;

    for(int i = 1; i < 5; i++) {
        if(*(p + i) < min)
            min = *(p + i);
    }

    cout << "Min = " << min;
    return 0;
}
