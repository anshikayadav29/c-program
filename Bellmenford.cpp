#include <iostream>
using namespace std;

struct Edge { int u,v,w; };

int main() {
    Edge edges[] = {{0,1,1},{1,2,3},{0,2,10}};
    int dist[3] = {0,1e9,1e9};

    for(int i=0;i<2;i++)
        for(auto e : edges)
            if(dist[e.u] + e.w < dist[e.v])
                dist[e.v] = dist[e.u] + e.w;

    for(int i=0;i<3;i++)
        cout << dist[i] << " ";
}
