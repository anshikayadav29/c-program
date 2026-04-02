#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,8};
    int* p = arr;
    int sum = 0;

    int i = 0;
    while(i < 4) {
        sum += *(p + i);
        i++;
    }

    cout << sum;
    return 0;
}
