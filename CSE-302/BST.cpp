#include <iostream>

using namespace std;

class Node {
public:
    int value; 
    Node* left; 
    Node* right; 

    Node(int value) {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorderTraversal(Node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->value << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
    if (root == NULL) return;
    cout << root->value << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->value << " ";
}

Node* insertLeft(Node* root, int value) {
    root->left = new Node(value);
    return root->left;
}

Node* insertRight(Node* root, int value) {
    root->right = new Node(value);
    return root->right;
}

int main() {
    Node* root = new Node(1);
    insertLeft(root, 4);
    insertRight(root, 6);
    insertLeft(root->left, 42);
    insertRight(root->left, 3);
    insertLeft(root->right, 2);
    insertRight(root->right, 33);

    cout << "Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}
