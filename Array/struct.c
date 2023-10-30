#include <stdio.h>
#include <string.h>


struct player
{
    char name[100];
    int age;
    int exp;
    int avg;

};

struct student
{
    char name[100];
    int rollno;
    int marks;
};

// Below code is for sorting an array of structures

/* void sortstruct(int n, int arr[]) {
    int temp;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 
            }
        }
    }

    printf("\nSorted array is: \n");
    for(int i = 0; i<n; i++) {
        printf("%d ",arr[i]);
    }
}
 */

int main() {
    
    /* struct player players[100];
    int n;

    printf("Enter no. of players: ");
    scanf("%d",&n);


    printf("\nEnter details of players - \n");
    for(int i = 0; i<n; i++) {
        printf("Enter details of player no. %d: \n",(i+1));
        printf("Enter name: \n");
        scanf("%s",players[i].name);
        printf("Enter age: ");
        scanf("%d",&players[i].age);
        printf("Enter experience: ");
        scanf("%d",&players[i].exp);
        printf("Enter average: ");
        scanf("%d",&players[i].avg);
    }


    int maxavg = 0;

    printf("\nDetails of player with highest average are: \n");
    for(int i = 0; i<n; i++) {

        if(players[i].avg > maxavg) {
            maxavg = players[i].avg;
        }
        
    }

    for(int i = 0; i<n; i++) {
        if(players[i].avg == maxavg) {
            puts(players[i].name);
            printf("%d\n",players[i].age);
            printf("%d\n",players[i].exp);
            printf("%d\n",players[i].avg);
        }
    }
 */

    struct student students[100];
    int n;

    printf("Enter no. of students: ");
    scanf("%d",&n);

    printf("Enter details of students - \n");
    for(int i = 0; i<n; i++) {
        printf("Enter details of student no. %d: \n",(i+1));
        printf("Enter name: \n");
        scanf("%s",students[i].name);
        printf("Enter roll no.: ");
        scanf("%d",&students[i].rollno);
        printf("Enter marks: ");
        scanf("%d",&students[i].marks);
    }   

    int maxmarks = 0;
    for(int i = 0; i<n; i++) {
        if(students[i].marks > maxmarks) {
            maxmarks = students[i].marks;
        }
    }

    printf("\nDetails of student with highest marks are: \n");
    for(int i = 0; i<n; i++) {
        if(students[i].marks == maxmarks) {
            puts(students[i].name);
            printf("%d\n",students[i].rollno);
            printf("%d\n",students[i].marks);
        }
    }

    int temp;
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++) {
            if(students[j].marks > students[j+1].marks) {
                temp = students[j+1].marks;
                students[j+1].marks = students[j].marks;
                students[j].marks = temp;
            }
        }
    }

    printf("\nSorted array is: \n");
    for(int i = 0; i<n; i++) {
        printf("%s ",students[i].name);
        printf("%d ",students[i].marks);
        printf("%d\n",students[i].rollno);
    }
    
    return 0;
    
}