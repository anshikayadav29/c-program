#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,7,5};
    int n = 5, sum = 12;

    for(int i=0;i<n;i++) {
        int curr = 0;
        for(int j=i;j<n;j++) {
            curr += arr[j];
            if(curr == sum) {
                cout<<i<<" "<<j;
            }
        }
    }
}
