#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,i,j,tmp;

  printf("How many elements in array?: ");
  scanf("%d", &n);
  printf("Enter the elements: ");
  int arr[n];
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){

        if((i&1) && (j&1)){
          if(arr[i] < arr[j]){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
        }else if((!(i&1)) && (!(j&1))){
          if(arr[i] > arr[j]){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
          }
        }

    }
  }

  printf("The new array is: ");
  for(i = 0; i < n; i++)
   printf("%d ", arr[i]);
  


  return 0;
}
