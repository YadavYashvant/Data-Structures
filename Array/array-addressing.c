#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Addresses of each element:\n");
    for (i = 0; i < 5; i++) {
        printf("&arr[%d]: %p\n", i, &arr[i]);
    }

    printf("\nContinuation of memory:\n");
    for (i = 0; i < 5; i++) {
        printf("%p: %d\n", arr + i, *(arr + i));
    }

    return 0;
}
