#include <iostream>
using namespace std;

int main() {
    int arr[] = {10,20,30,40};
    int sum = 0;

    for(int i=0;i<4;i++) sum += arr[i];

    cout << sum;
}
