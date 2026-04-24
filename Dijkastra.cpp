#include <iostream>
#include <vector>
using namespace std;

int main() {
    int graph[3][3] = {
        {0,1,4},
        {1,0,2},
        {4,2,0}
    };

    int dist[3] = {0, 1e9, 1e9};
    bool vis[3] = {0};

    for(int i = 0; i < 3; i++) {
        int u = -1;
        for(int j = 0; j < 3; j++)
            if(!vis[j] && (u==-1 || dist[j] < dist[u]))
                u = j;

        vis[u] = true;

        for(int v = 0; v < 3; v++)
            if(graph[u][v])
                dist[v] = min(dist[v], dist[u] + graph[u][v]);
    }

    for(int i = 0; i < 3; i++)
        cout << dist[i] << " ";
}
