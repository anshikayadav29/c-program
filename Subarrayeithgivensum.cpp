#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,7,5};
    int sum = 12, curr = 0, l = 0;

    for(int r = 0; r < 5; r++) {
        curr += arr[r];
        while(curr > sum) curr -= arr[l++];
        if(curr == sum) {
            cout << l << " " << r;
            break;
        }
    }
}
