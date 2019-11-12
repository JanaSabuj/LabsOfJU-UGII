#include <stdio.h>
#include <stdlib.h>

void SS(int A[], int n);
void swap(int* x, int* y);

int main(void) {
  
  int A[] = {9,2,5,4,7,8,6,3,1,5};
  int n = sizeof(A) / sizeof(A[0]);
  SS(A,n);

  int i;
  for(i = 0; i < n; i++)
    printf("%d ", A[i]);

  return 0;
}

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void SS(int A[], int n){
  int i,j;

  for(i = 0; i < n - 1; i++){
    int mini = i;
    for(j = i + 1; j < n; j++){
      if(A[j] < A[mini])
        mini = j;
    }
    swap(&A[mini], &A[i]);
  }
}
