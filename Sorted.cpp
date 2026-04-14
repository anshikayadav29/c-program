#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    bool sorted = true;

    for(int i=1;i<5;i++) {
        if(arr[i] < arr[i-1]) sorted = false;
    }

    if(sorted) cout<<"Sorted";
    else cout<<"Not Sorted";
}
