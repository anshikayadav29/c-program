#include <iostream>
#include <sstream>
using namespace std;

struct Node {
    int val;
    Node *left,*right;
    Node(int x):val(x),left(NULL),right(NULL){}
};

void serialize(Node* root, string &s) {
    if(!root) { s += "# "; return; }
    s += to_string(root->val) + " ";
    serialize(root->left,s);
    serialize(root->right,s);
}
