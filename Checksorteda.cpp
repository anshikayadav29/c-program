#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int* p = arr;
    bool sorted = true;

    for(int i = 0; i < 3; i++) {
        if(*(p + i) > *(p + i + 1)) {
            sorted = false;
            break;
        }
    }

    if(sorted)
        cout << "Sorted";
    else
        cout << "Not Sorted";

    return 0;
}
