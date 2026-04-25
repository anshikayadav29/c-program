#include <iostream>
#include <algorithm>
using namespace std;

struct Edge { int u,v,w; };

int parent[100];

int find(int x) {
    return parent[x]==x?x:parent[x]=find(parent[x]);
}

int main() {
    Edge e[]={{0,1,1},{1,2,2},{0,2,3}};
    for(int i=0;i<3;i++) parent[i]=i;

    sort(e,e+3,[](Edge a,Edge b){return a.w<b.w;});

    int cost=0;
    for(auto x:e) {
        if(find(x.u)!=find(x.v)) {
            cost+=x.w;
            parent[find(x.u)]=find(x.v);
        }
    }
    cout<<cost;
}
