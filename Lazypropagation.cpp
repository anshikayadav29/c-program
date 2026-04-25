#include <iostream>
using namespace std;

int tree[100], lazy[100];

void update(int node,int start,int end,int l,int r,int val) {
    if(lazy[node]!=0) {
        tree[node]+=(end-start+1)*lazy[node];
        if(start!=end) {
            lazy[2*node]+=lazy[node];
            lazy[2*node+1]+=lazy[node];
        }
        lazy[node]=0;
    }

    if(start>r||end<l) return;

    if(l<=start&&end<=r) {
        tree[node]+=(end-start+1)*val;
        if(start!=end) {
            lazy[2*node]+=val;
            lazy[2*node+1]+=val;
        }
        return;
    }

    int mid=(start+end)/2;
    update(2*node,start,mid,l,r,val);
    update(2*node+1,mid+1,end,l,r,val);

    tree[node]=tree[2*node]+tree[2*node+1];
}
