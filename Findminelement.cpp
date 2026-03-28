#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 5, 40, 15};
    int min = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    cout << "Min = " << min;
}
