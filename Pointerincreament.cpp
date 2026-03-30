#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int* p = arr;

    cout << *p << endl; // 10
    p++;
    cout << *p << endl; // 20

    return 0;
}
