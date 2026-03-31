#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 5, 15};
    int* p = arr;

    int first = *p, second = *p;

    for(int i = 0; i < 4; i++) {
        if(*(p + i) > first) {
            second = first;
            first = *(p + i);
        }
        else if(*(p + i) > second && *(p + i) != first) {
            second = *(p + i);
        }
    }

    cout << "Second Largest = " << second;
    return 0;
}
