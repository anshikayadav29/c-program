#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool visited[100];

bool dfs(int v, int parent) {
    visited[v] = true;
    for(int u : adj[v]) {
        if(!visited[u]) {
            if(dfs(u, v)) return true;
        }
        else if(u != parent) return true;
    }
    return false;
}

int main() {
    adj[0] = {1};
    adj[1] = {0,2};
    adj[2] = {1};

    cout << dfs(0, -1);
}
