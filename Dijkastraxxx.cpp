#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> g[100];
int dista[100];

void dijkstra(int src,int n){
    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;

    for(int i=0;i<n;i++) dista[i]=1e9;

    dista[src]=0;
    pq.push({0,src});

    while(!pq.empty()){
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        for(auto x:g[u]){
            int v=x.first,w=x.second;

            if(dista[v]>d+w){
                dista[v]=d+w;
                pq.push({dista[v],v});
            }
        }
    }
}

int main(){
    int n=5;
    g[0].push_back({1,2});
    g[1].push_back({2,3});
    g[0].push_back({3,6});
    g[3].push_back({4,2});

    dijkstra(0,n);

    for(int i=0;i<n;i++)
        cout<<dista[i]<<" ";
}
