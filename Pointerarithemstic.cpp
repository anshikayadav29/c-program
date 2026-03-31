#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,10,15};
    int* p = &arr[2];

    p--;
    cout << *p << endl; // 10

    return 0;
}
