#include <stdio.h>
#define MX 100

int main() {
  int arr[MX];
  int *ptr = arr;
  int n,i;

  printf("Enter the size of the array :");
  scanf("%d", &n);

  for(i = 0; i<n; i++){
    printf("Enter the %d'th element ", i + 1);
    scanf("%d", ptr);
    ptr++;
  }

  ptr = arr;

  printf("The inputted array is : ");
  for(i = 0; i<n; i++){
    printf("%d ", *(ptr+i));
  }
 
  return 0;
}