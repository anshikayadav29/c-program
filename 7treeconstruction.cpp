#include <iostream>
#include <stack>
using namespace std;

struct Node {
    char value;
    Node *left, *right;
    Node(char val) : value(val), left(nullptr), right(nullptr) {}
};

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

Node* buildTree(string postfix) {
    stack<Node*> st;
    for (char c : postfix) {
        if (!isOperator(c)) st.push(new Node(c));
        else {
            Node* right = st.top(); st.pop();
            Node* left = st.top(); st.pop();
            Node* node = new Node(c);
            node->left = left;
            node->right = right;
            st.push(node);
        }
    }
    return st.top();
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}

int main() {
    string postfix = "ab+cde+"; // ((a + b) * c * (d + e))
    Node* root = buildTree(postfix);
    cout << "Inorder traversal: ";
    inorder(root);
    return 0;
}