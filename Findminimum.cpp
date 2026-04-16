#include <iostream>
using namespace std;

int main() {
    int arr[] = {5,2,8,1,9};
    int minVal = arr[0];

    for(int i=1;i<5;i++) {
        if(arr[i] < minVal) minVal = arr[i];
    }

    cout << minVal;
}
