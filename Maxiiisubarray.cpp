#include <iostream>
using namespace std;

int main() {
    int arr[]={2,3,-2,4};
    int maxP=arr[0], minP=arr[0], res=arr[0];

    for(int i=1;i<4;i++) {
        if(arr[i]<0) swap(maxP,minP);

        maxP=max(arr[i],maxP*arr[i]);
        minP=min(arr[i],minP*arr[i]);

        res=max(res,maxP);
    }
    cout<<res;
}
