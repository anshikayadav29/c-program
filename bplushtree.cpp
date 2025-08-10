#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define DEGREE 3 // Max 3 keys

class BPlusNode {
public:
    bool isLeaf;
    vector<int> keys;
    vector<BPlusNode*> children;

    BPlusNode(bool leaf) : isLeaf(leaf) {}
};

void printTree(BPlusNode* root, int level = 0) {
    if (!root) return;
    cout << string(level * 4, ' ');
    for (int k : root->keys) cout << k << " ";
    cout << endl;
    for (auto child : root->children)
        printTree(child, level + 1);
}

// Simulation only - insert just builds sorted leaves
BPlusNode* insert(BPlusNode* root, int key) {
    if (!root) {
        BPlusNode* node = new BPlusNode(true);
        node->keys.push_back(key);
        return node;
    }

    if (root->isLeaf) {
        root->keys.push_back(key);
        sort(root->keys.begin(), root->keys.end());
        return root;
    }

    // Non-leaf logic (simplified) would go here
    return root;
}

int main() {
    BPlusNode* root = nullptr;
    for (int k : {10, 20, 5, 6, 12})
        root = insert(root, k);

    cout << "Simulated B+ Tree:\n";
    printTree(root);
    return 0;
}