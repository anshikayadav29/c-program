#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<string> words = {"baa","abcd","abca","cab","cad"};
    vector<int> adj[26];
    int indeg[26]={0};

    for(int i=0;i<words.size()-1;i++) {
        string a=words[i], b=words[i+1];
        for(int j=0;j<min(a.size(),b.size());j++) {
            if(a[j]!=b[j]) {
                adj[a[j]-'a'].push_back(b[j]-'a');
                indeg[b[j]-'a']++;
                break;
            }
        }
    }

    queue<int> q;
    for(int i=0;i<26;i++)
        if(indeg[i]==0) q.push(i);

    while(!q.empty()) {
        int u=q.front(); q.pop();
        cout<<char(u+'a')<<" ";
        for(int v:adj[u])
            if(--indeg[v]==0) q.push(v);
    }
}
