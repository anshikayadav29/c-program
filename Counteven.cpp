#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int* p = arr;
    int count = 0;

    for(int i = 0; i < 5; i++) {
        if(*(p + i) % 2 == 0)
            count++;
    }

    cout << "Even Count = " << count;
    return 0;
}
