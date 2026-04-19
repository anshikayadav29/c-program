#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,5,7,-1,5};
    int sum = 6;

    for(int i=0;i<5;i++) {
        for(int j=i+1;j<5;j++) {
            if(arr[i]+arr[j]==sum)
                cout<<arr[i]<<" "<<arr[j]<<"\n";
        }
    }
}
