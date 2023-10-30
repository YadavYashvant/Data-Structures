#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int peek() {
    if (top < 0) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);
    printf("Top element: %d\n", peek());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Top element: %d\n", peek());
    push(40);
    printf("Top element: %d\n", peek());
    return 0;
}
