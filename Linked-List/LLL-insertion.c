#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertion(struct node *ptr, int pos, int item, struct node *head) {
    struct node *temp, *temp1;
    int i = 1;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->next = NULL;
    while(i < pos) {
        ptr = ptr->next;
        i++;
    }
    temp1 = ptr->next;
    ptr->next = temp;
    temp->next = temp1;

    ptr = head;

    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int main() {
    struct node n1, n2, n3, n4, *head, *ptr;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n4.data = 40;
    head = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL;
    ptr = head;

    insertion(ptr, 2, 25, head);

    /* while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } */
    return 0;
}