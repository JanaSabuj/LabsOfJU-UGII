#include <stdio.h>
#include <stdlib.h>

int BS(int A[], int low, int high, int key){

  while(low <= high){
    int mid = low + (high - low)/2;
    if(A[mid] == key)
      return mid;
    else if(A[mid] < key)
      low = mid + 1;
    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  
  int i, n, val, ans;
  int A[] = {1,2,4,5,6,8,9,11};
  n = sizeof(A)/sizeof(A[0]);
  for(i = 0; i < n; i++)
    printf("%d ", A[i]);

  printf("\nEnter the value to search for: ");
  scanf("%d", &val);

  ans = BS(A,0,n-1,val);
  if(ans == -1)
    printf("Sorry! Val is not present in the array");
  else
    printf("Val found in position %d", ans + 1);


  return 0;
}
