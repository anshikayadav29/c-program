#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,4,6,8};
    int* p = arr;
    int i = 0;

    while(i < 4) {
        cout << *(p + i) << endl;
        i++;
    }

    return 0;
}
