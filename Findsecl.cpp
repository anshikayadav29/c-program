#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int largest = arr[0], second = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
            second = arr[i];
    }

    cout << second;
}
