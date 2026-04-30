#include <bits/stdc++.h>
using namespace std;

struct Trie{
    Trie* child[26];
    bool end=false;
};

Trie* root=new Trie();

void insert(string s){
    Trie* cur=root;

    for(char c:s){
        int id=c-'a';

        if(!cur->child[id])
            cur->child[id]=new Trie();

        cur=cur->child[id];
    }

    cur->end=true;
}

bool search(string s){
    Trie* cur=root;

    for(char c:s){
        int id=c-'a';

        if(!cur->child[id])
            return false;

        cur=cur->child[id];
    }

    return cur->end;
}

int main(){
    insert("hello");

    cout<<search("hello");
}
