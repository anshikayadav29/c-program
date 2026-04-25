#include <iostream>
using namespace std;

struct Trie {
    Trie* child[26];
    bool end;

    Trie() {
        for(int i=0;i<26;i++) child[i]=NULL;
        end=false;
    }
};

void insert(Trie* root, string s) {
    for(char c:s) {
        if(!root->child[c-'a'])
            root->child[c-'a']=new Trie();
        root=root->child[c-'a'];
    }
    root->end=true;
}

bool search(Trie* root, string s) {
    for(char c:s) {
        if(!root->child[c-'a']) return false;
        root=root->child[c-'a'];
    }
    return root->end;
}

int main() {
    Trie* root=new Trie();
    insert(root,"cat");
    cout<<search(root,"cat");
}
