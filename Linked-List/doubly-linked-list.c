#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
void traverse(struct Node* head) {
    struct Node* current = head;
    printf("Traversal in forward direction:\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\nTraversal in reverse direction:\n");
    current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1;
    head->prev = NULL;
    head->next = second;
    second->data = 2;
    second->prev = head;
    second->next = third;
    third->data = 3;
    third->prev = second;
    third->next = NULL;
    traverse(head);
    return 0;
}
