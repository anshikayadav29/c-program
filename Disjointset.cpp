#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];
bool vis[100], rec[100];

bool dfs(int v) {
    vis[v] = rec[v] = true;

    for(int u : adj[v]) {
        if(!vis[u] && dfs(u)) return true;
        else if(rec[u]) return true;
    }

    rec[v] = false;
    return false;
}

int main() {
    adj[0] = {1};
    adj[1] = {2};
    adj[2] = {0};

    cout << dfs(0);
}
