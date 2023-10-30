#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],d[10],m=0,k=0,n1,n2,l,i,j;
    printf("Enter size of set A: ");
    scanf("%d",&n1);
    printf("Enter element of set: \n");
    for( i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("Enter size of set B: ");
    scanf("%d",&n2);
    printf("Enter element of set: \n");
    for( i=0;i<n2;i++)
    scanf("%d",&b[i]);

    
    for( i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==n2)
        {
            for(l=0;l<k;l++)
            {
                if(c[l]==a[i])
                 break;
            }
            if(l==k)
            {
                c[k]=a[i];
                k++;
            }
        }
        
    }

     printf("Elements of A not present in B are:-\n");
     for(i=0;i<k;i++)
     {
         printf("%d ",c[i]);
     }


    return 0;
    
}