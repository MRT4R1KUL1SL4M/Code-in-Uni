#include <stdio.h>
#include <stdlib.h>

struct node {
    int item;
    struct node* left;
    struct node* right;
};

void inorderTraversal(struct node* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    printf("%d ", root->item);
    inorderTraversal(root->right);
}

struct node* create(int value) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->item = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertLeft(struct node* root, int value) {
    root->left = create(value);
    return root->left;
}

struct node* insertRight(struct node* root, int value) {
    root->right = create(value);
    return root->right;
}

int main() {
    struct node* root = create(1);
    insertLeft(root, 4);
    insertRight(root, 6);
    insertLeft(root->left, 42);
    insertRight(root->left, 3);
    insertLeft(root->right, 2);
    insertRight(root->right, 33);

    printf("Inorder traversal \n");
    inorderTraversal(root);

    return 0;
}
