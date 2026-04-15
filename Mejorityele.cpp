#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,2,1,2,3,2,2};
    int n = 7;

    int count = 0, candidate;

    for(int i=0;i<n;i++) {
        if(count==0) candidate = arr[i];
        count += (arr[i]==candidate) ? 1 : -1;
    }

    cout << candidate;
}
