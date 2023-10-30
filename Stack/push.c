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

int main() {
    push(10);
    push(20);
    push(30);
    printf("Top element: %d\n", stack[top]);
    return 0;
}