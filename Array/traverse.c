#include <stdio.h>
int main() {
    int a[20];
    int n;
    printf("Enter the no. of elements: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("Elements of array are: \n");
    for(int i = 0; i<n; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}