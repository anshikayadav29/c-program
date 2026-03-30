#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15};
    int* p = arr;

    for(int i = 0; i < 3; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}
