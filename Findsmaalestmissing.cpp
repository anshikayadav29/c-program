#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,4,-1,1};
    int n = 4;

    for(int i=1;i<=n+1;i++) {
        bool found = false;
        for(int j=0;j<n;j++) {
            if(arr[j] == i) found = true;
        }
        if(!found) {
            cout << i;
            break;
        }
    }
}
