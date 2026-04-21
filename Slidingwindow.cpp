#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,1,5,1,3,2};
    int k = 3, sum = 0, maxSum = 0;

    for(int i = 0; i < k; i++)
        sum += arr[i];

    maxSum = sum;

    for(int i = k; i < 6; i++) {
        sum += arr[i] - arr[i-k];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}
