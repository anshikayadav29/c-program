#include <iostream>
using namespace std;

int main() {
    int a[]={1,3}, b[]={2};
    int c[3], i=0,j=0,k=0;

    while(i<2 && j<1)
        c[k++]= (a[i]<b[j]) ? a[i++] : b[j++];
    while(i<2) c[k++]=a[i++];
    while(j<1) c[k++]=b[j++];

    cout<<c[k/2];
}
