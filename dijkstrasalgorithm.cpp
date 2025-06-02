#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 1e9
typedef pair<int, int> pii;

void dijkstra(int src, vector<vector<pii>>& adj, int V) {
    vector<int> dist(V, INF);
    priority_queue<pii, vector<pii>, greater<>> pq;
    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second; pq.pop();
        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < V; i++)
        cout << "Distance from " << src << " to " << i << ": " << dist[i] << endl;
}

int main() {
    int V = 5;
    vector<vector<pii>> adj(V);
    adj[0].push_back({1, 10});
    adj[0].push_back({4, 5});
    adj[1].push_back({2, 1});
    adj[1].push_back({4, 2});
    adj[2].push_back({3, 4});
    adj[3].push_back({2, 6});
    adj[3].push_back({0, 7});
    adj[4].push_back({1, 3});
    adj[4].push_back({2, 9});
    adj[4].push_back({3, 2});

    dijkstra(0, adj, V);
    return 0;
}