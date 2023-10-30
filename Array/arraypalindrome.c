#include <stdio.h>

int findMinmerges(int a[], int n) {
    int result = 0;

    for(int i = 0, j = n-1; i<=j;) {
        if(a[i] == a[j]) {
            i++;
            j--;
        }

        else if(a[i] > a[j]) {
            j--;
            a[j] += a[j+1];
            result++;
        }

        else{
            i++;
            a[i] += a[i-1];
            result++;
        }
    }

    return result;
}

int main() {
    int a[50];
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    printf("minimum number of merges to make it palindrome are %d\n",findMinmerges(a, n));

    return 0;

}