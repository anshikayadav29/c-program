#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

int height(Node* root) {
    if(root == NULL) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    if(lh == -1 || rh == -1 || abs(lh - rh) > 1)
        return -1;
    return 1 + max(lh, rh);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);

    cout << (height(root) != -1);
}
