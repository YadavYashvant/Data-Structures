#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** head, int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    Node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void delete(Node** head, int key) {
    Node* temp = *head, *prev;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

void traverse(Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

