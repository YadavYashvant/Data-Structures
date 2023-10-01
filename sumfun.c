#include <stdio.h>


int sumfun(int *a, int *b) {
    int *c;
    *c = *a + *b;
    return *c;
}

int main() {
    int a,b;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    
    int c = sumfun(&a, &b);

    printf("Sum of these numbers is: %d",c);
}
