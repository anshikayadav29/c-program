#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,1,1,1,1};
    int n = 7, k = 3;

    int maxLen = 0;

    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=i;j<n;j++) {
            sum += arr[j];
            if(sum == k)
                maxLen = max(maxLen, j-i+1);
        }
    }

    cout << maxLen;
}
