#include <stdio.h>
#include <stdlib.h>

void IS(int A[], int n);

int main(void) {
  
  int A[] = {9,2,5,4,6,2,1,5,3,4,7,8};
  int n = sizeof(A) / sizeof(A[0]);
  IS(A,n);

  int i;
  for(i = 0; i < n; i++)
    printf("%d ", A[i]);

  return 0;
}

void IS(int A[], int n){
int i,j;

  for(i = 1; i < n; i++){
    int key = A[i];
    j = i - 1;
    while(j>=0 && A[j]>key){
      A[j+1] = A[j];
      j--;
    }
    A[j + 1] = key;
  }
}
