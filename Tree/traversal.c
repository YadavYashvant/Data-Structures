#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

int main() {
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data for root: ");
    scanf("%d", &data);
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    struct Node* leftChild = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for left child of root: ");
    scanf("%d", &data);
    leftChild->data = data;
    leftChild->left = NULL;
    leftChild->right = NULL;

    struct Node* rightChild = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data for right child of root: ");
    scanf("%d", &data);
    rightChild->data = data;
    rightChild->left = NULL;
    rightChild->right = NULL;

    root->left = leftChild;
    root->right = rightChild;

    printf("Tree has been created successfully\n");
    printf("Root node: %d\n", root->data);
    printf("Left child of root: %d\n", root->left->data);
    printf("Right child of root: %d\n", root->right->data);

    free(root);
    free(leftChild);
    free(rightChild);
    return 0;
}