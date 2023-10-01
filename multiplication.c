#include <stdio.h>

int main() {
    int n;
    int a[50][50], b[50][50];
    
    printf("Enter the order of matrices: \n");
    scanf("%d",&n);

    printf("Enter elements of first matrix: \n");

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter elements of second matrix: \n");
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            scanf("%d",&b[i][j]);
        }
    }

    int m[20][20];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            m[i][j] = 0;
            for(int k = 0; k<n; k++) {
                m[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    printf("Multiplication of these arrays is: \n");
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;

}