#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *link;
};

void printlist(struct node* head) {
    struct node* current = head;

    while(current != NULL) {
        printf("%d ", current->info);
        current = current->link;
    }
}

void searchlist(struct node* head, int key) {
    struct node* current = head;

    while(current != NULL) {
        if(current->info == key) {
            printf("Found\n");
            return;
        }
        current = current->link;
    }
    printf("Not found\n");
}

void insertlist(struct node *head, int pos, int item) {
    
}

int main() {

    //struct node *n1, *n2, *n3, *s; 
    struct node n1, n2, n3, *s;


    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->info = 10;
    head->link = second;

    second->info = 20;
    second->link = third;

    third->info = 30;
    third->link = NULL;

    printf("Printing linkedlist made using dynamic memory allocation: \n");
    printlist(head);

    s = &n1; // s = n1

    n1.info = 10; // or n1->info = 10 and so on
    n1.link = &n2; // or n1->link = n2 and so on
    n2.info = 50;
    n2.link = &n3;
    n3.info = 40;
    n3.link = NULL;

    printf("Printing linkedlist made using static memory allocation: \n");
    printlist(s);

    int key;
    printf("\nEnter number to be searched: ");
    scanf("%d", &key);
    searchlist(s, key);

    return 0;
}