#include <stdio.h>

int main() {
  int a[20];
  int n;
  printf("Enter size of array: \n");
  scanf("%d",&n);
  printf("Enter elements of array: \n");
  for(int i = 0; i<n; i++) {
    scanf("%d",&a[i]);
  }

  int count = 0;
  int result = 0;

  for (int i = 0; i < n; i++) {
    int temp = a[i];
    for (int j = 0; j < n; j++) {
      if (temp == a[j]) {
        count++;
      }
    }
    if (count == 1) {
      result = a[i];
      break;
    }
    count = 0;
  }

  printf("unique number is: %d", result);

  return 0;
}