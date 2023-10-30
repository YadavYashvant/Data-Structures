#include <stdio.h>
#include <string.h>

void reduceString(char *s, int k) {
    int len = strlen(s);
    int i, j, count;

    for (i = 0; i < len; i++) {
        if (i + k <= len) {
            count = 1;
            while (count < k && s[i + count] == s[i]) {
                count++;
            }
            if (count == k) {
                for (j = i; j < len - k + 1; j++) {
                    s[j] = s[j + k];
                }
                len -= k;
                i--;
            }
        }
    }
    s[len] = '\0';
}

int main() {
    char s[100];
    int k;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    reduceString(s, k);

    printf("Reduced string is: %s\n", s);

    return 0;
}
