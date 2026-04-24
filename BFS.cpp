#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    vector<int> adj[100];
    bool visited[100] = {0};

    adj[0] = {1,2};
    adj[1] = {3};

    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";

        for(int u : adj[v]) {
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
        }
    }
}
