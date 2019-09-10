#include <stdio.h>
#include <stdlib.h>

int main() {
  int arr[16];
  int i, val;
  for(i =0; i<15; i++){
    arr[i] = i+1;
  }

  printf("The array is : ");
  for(i =0; i<15; i++){
     printf("%d ", arr[i]);
  }

  printf("Enter the value to enter after 6th data: ");
  scanf("%d", &val);

  for(i = 14; i>= 6; i--){
    arr[i+1] = arr[i];
  }

  arr[6] = val;

  printf("\n The array after insertion is: ");
  for(i =0; i<16; i++){
     printf("%d ", arr[i]);
  }


  printf("\nArray on deleting after 6th data: ");
  for(i = 6; i<15; i++){
    arr[i] = arr[i+1];
  }

  for(i =0; i<15; i++){
     printf("%d ", arr[i]);
  }
  
   
  return 0;
}