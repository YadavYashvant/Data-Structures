#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

int is_empty() {
    if (front == -1 && rear == -1) {
        return 1;
    }
    return 0;
}

int is_full() {
    if (rear == MAX_SIZE - 1) {
        return 1;
    }
    return 0;
}

void enqueue(int x) {
    if (is_full()) {
        printf("Error: Queue is full\n");
        return;
    }
    if (is_empty()) {
        front = rear = 0;
    } else {
        rear++;
    }
    queue[rear] = x;
}

void dequeue() {
    if (is_empty()) {
        printf("Error: Queue is empty\n");
        return;
    }
    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

int get_front() {
    if (is_empty()) {
        printf("Error: Queue is empty\n");
        return -1;
    }
    return queue[front];
}

void print_queue() {
    if (is_empty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    print_queue();
    dequeue();
    print_queue();
    printf("Front element: %d\n", get_front());
    return 0;
}
