#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Node {
    int val;
    vector<Node*> neighbors;
    Node(int x):val(x){}
};

map<Node*,Node*> mp;

Node* clone(Node* node) {
    if(!node) return NULL;
    if(mp[node]) return mp[node];

    Node* copy = new Node(node->val);
    mp[node]=copy;

    for(auto n:node->neighbors)
        copy->neighbors.push_back(clone(n));

    return copy;
}
