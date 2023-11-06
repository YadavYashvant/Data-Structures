#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    struct Node* leftChild = (struct Node*)malloc(sizeof(struct Node));
    leftChild->data = 2;
    leftChild->left = NULL;
    leftChild->right = NULL;

    struct Node* rightChild = (struct Node*)malloc(sizeof(struct Node));
    rightChild->data = 3;
    rightChild->left = NULL;
    rightChild->right = NULL;

    root->left = leftChild;
    root->right = rightChild;

    return 0;
}
