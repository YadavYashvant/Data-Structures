#include <stdio.h>

int main() {
    int a[] = {5,9,2,3,8,1,6,4,10,7};
    int n = 10;
    int start = 0;
    int last = n-1;
    int result = 0;
    while (start<=last)
    {
        if(a[start] < a[last]) {
            last--;
        }
        if(a[start] > a[last]) {
            start++;
        }
        result = a[last];
    }

    // for(int i = 0; i<n; i++) {
    //     printf("%d ",a[i]);
    // }

    printf("%d ",result);
}