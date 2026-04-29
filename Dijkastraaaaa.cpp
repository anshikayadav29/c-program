#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int,int>> graph[100];
int dist[100];

int main() {

    int n = 5;

    for(int i = 0; i < 100; i++)
        dist[i] = 1e9;

    graph[1].push_back({2,4});
    graph[1].push_back({3,1});
    graph[3].push_back({2,2});
    graph[2].push_back({5,4});
    graph[3].push_back({5,5});

    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;

    dist[1] = 0;

    pq.push({0,1});

    while(!pq.empty()) {

        int d = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        for(auto child : graph[node]) {

            int next = child.first;
            int wt = child.second;

            if(dist[node] + wt < dist[next]) {

                dist[next] = dist[node] + wt;

                pq.push({dist[next], next});
            }
        }
    }

    for(int i=1;i<=n;i++)
        cout << dist[i] << " ";
}
