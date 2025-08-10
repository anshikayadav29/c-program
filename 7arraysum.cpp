#include <iostream>
using namespace std;

int main() {
    int arr[] = {12,6,7,34,9,23};
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl; 

    return 0;
}