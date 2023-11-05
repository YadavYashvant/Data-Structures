#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteNode(struct Node** head_ref, int key) {
    struct Node *current_node = *head_ref, *previous_node = NULL;
    while (current_node != NULL && current_node->data != key) {
        previous_node = current_node;
        current_node = current_node->next;
    }
    if (current_node == NULL) {
        return;
    }
    if (previous_node == NULL) {
        *head_ref = current_node->next;
    }
    else {
        previous_node->next = current_node->next;
    }
    free(current_node);
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    struct Node* head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    printf("Original linked list: ");
    printList(head);
    printf("\n");
    deleteNode(&head, 2);
    printf("Updated linked list: ");
    printList(head);
    printf("\n");
    deleteNode(&head, 1);
    printf("Updated linked list: ");
    printList(head);
    printf("\n");
    return 0;
}
