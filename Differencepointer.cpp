#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};

    int* p1 = &arr[0];
    int* p2 = &arr[3];

    cout << (p2 - p1) << endl;

    return 0;
}
