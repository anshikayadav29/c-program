#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int m,int r){
    vector<int> t;

    int i=l,j=m+1;

    while(i<=m && j<=r){
        if(a[i]<a[j]) t.push_back(a[i++]);
        else t.push_back(a[j++]);
    }

    while(i<=m) t.push_back(a[i++]);
    while(j<=r) t.push_back(a[j++]);

    for(int i=l;i<=r;i++)
        a[i]=t[i-l];
}

void mergesort(int a[],int l,int r){
    if(l>=r) return;

    int m=(l+r)/2;

    mergesort(a,l,m);
    mergesort(a,m+1,r);

    merge(a,l,m,r);
}

int main(){
    int a[]={5,2,1,9,3};
    int n=5;

    mergesort(a,0,n-1);

    for(int x:a)
        cout<<x<<" ";
}
