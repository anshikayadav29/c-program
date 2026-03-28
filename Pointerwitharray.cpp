#include <iostream>
using namespace std;

int main() {
    int arr[3] = {1, 2, 3};
    int* p = arr;

    cout << *p << endl;       // 1
    cout << *(p + 1) << endl; // 2

    return 0;
}
