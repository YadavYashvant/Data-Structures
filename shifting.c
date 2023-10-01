
#include <stdio.h>


void moveZerosToEnd(int arr[], int n)
{

	int count = 0;

	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i];

	for (int i = count; i < n; i++)
		arr[i] = 0;
}


int main()
{
	int arr[100];
	int n;
    printf("Enter size of array: \n");
    scanf("%d",&n);
    printf("Enter elements of array: \n");
    for(int i = 0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

	moveZerosToEnd(arr, n);

	printf("\nModified array: ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

        
	return 0;
}
