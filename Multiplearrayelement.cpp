#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4};
    int* p = arr;
    int product = 1;

    for(int i = 0; i < 4; i++) {
        product *= *(p + i);
    }

    cout << "Product = " << product;
    return 0;
}
