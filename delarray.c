#include <stdio.h>

int main() {
    int a[100];
    int n;

    printf("Enter size of array: \n");
    scanf("%d",&n);

    printf("Enter elements of array: \n");
    for(int i = 0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    int curr = a[0], res=a[0];
    for(int i = 1; i<n; i++) {
        if(a[i] > a[i-1]) {
            curr = a[i] > curr+a[i] ? a[i]: curr + a[i];
            res = res > curr ? res: curr;
        }
        else{
            curr = a[i];
        }
    }

    printf("Maximun subarray sum is: %d",res);

    return 0;
}