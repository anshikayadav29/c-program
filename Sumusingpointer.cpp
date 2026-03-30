#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int* p = arr;
    int sum = 0;

    for(int i = 0; i < 4; i++) {
        sum += *(p + i);
    }

    cout << sum << endl;
    return 0;
}
