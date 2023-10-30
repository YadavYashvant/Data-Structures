#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

int pop() {
    if (top < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    int value = stack[top];
    top--;
    return value;
}

int main() {
    push(10);
    int value = pop();

    printf("Popped element: %d\n", value);
    return 0;
}