#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int u, vector<bool>& visited, stack<int>& st, vector<int> adj[]) {
    visited[u] = true;
    for(int v : adj[u])
        if(!visited[v]) dfs(v, visited, st, adj);
    st.push(u);
}

void topologicalSort(int V, vector<int> adj[]) {
    vector<bool> visited(V, false);
    stack<int> st;
    for(int i = 0; i < V; i++)
        if(!visited[i]) dfs(i, visited, st, adj);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main() {
    int V = 6;
    vector<int> adj[6] = {
        {2, 3},
        {3, 4},
        {3},
        {5},
        {},
        {}
    };
    topologicalSort(V, adj);
}