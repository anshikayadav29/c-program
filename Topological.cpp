#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> adj[100];
bool visited[100];
stack<int> st;

void topo(int v) {
    visited[v] = true;
    for(int u : adj[v])
        if(!visited[u])
            topo(u);
    st.push(v);
}

int main() {
    adj[0] = {1,2};
    adj[1] = {3};

    topo(0);

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
