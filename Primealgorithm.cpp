#include <iostream>
using namespace std;

int main() {
    int graph[3][3]={{0,1,3},{1,0,2},{3,2,0}};
    int key[3]={0,1e9,1e9};
    bool mst[3]={0};

    for(int i=0;i<3;i++) {
        int u=-1;
        for(int j=0;j<3;j++)
            if(!mst[j]&&(u==-1||key[j]<key[u]))
                u=j;

        mst[u]=1;

        for(int v=0;v<3;v++)
            if(graph[u][v]&& !mst[v])
                key[v]=min(key[v],graph[u][v]);
    }

    int sum=0;
    for(int i=0;i<3;i++) sum+=key[i];
    cout<<sum;
}
