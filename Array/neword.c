#include <stdio.h>
#include <string.h>

int main() {
    char w[100];

    printf("Enter the word: \n");
    scanf("%s",w);

    int wordcount = 0;

    for(int i = 0; i<strlen(w); i++) {
        if(w[i] == ' ') {
            wordcount++;
        }
    }

    printf("Word count of the paragraph is: %d",(wordcount+1));

    return 0;
}