#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,3,3};
    int n = 5;

    for(int i=0;i<n;i++) {
        bool unique = true;
        for(int j=0;j<n;j++) {
            if(i!=j && arr[i]==arr[j]) unique=false;
        }
        if(unique) {
            cout<<arr[i];
            break;
        }
    }
}
