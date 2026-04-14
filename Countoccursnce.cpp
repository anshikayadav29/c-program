#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3};
    int key = 2, count = 0;

    for(int i=0;i<5;i++) {
        if(arr[i]==key) count++;
    }

    cout<<count;
}
