#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,5};
    int n = 5;

    int sum = n*(n+1)/2;
    int arrSum = 0;

    for(int i=0;i<4;i++) arrSum += arr[i];

    cout << sum - arrSum;
}
