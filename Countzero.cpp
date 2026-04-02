#include <iostream>
using namespace std;

int main() {
    int arr[] = {0,1,0,3,0};
    int* p = arr;
    int count = 0;

    for(int i = 0; i < 5; i++) {
        if(*(p + i) == 0)
            count++;
    }

    cout << "Zeros = " << count;
    return 0;
}
