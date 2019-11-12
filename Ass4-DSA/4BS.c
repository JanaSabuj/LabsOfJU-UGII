#include <stdio.h>
#include <stdlib.h>

void BS(int A[], int n);
void swap(int* x , int* y);

int main(void) {
  
  int A[] = {9,8,7,5,2,2,3,6,4,5,1,5,6};
  int n = sizeof(A) / sizeof(A[0]);
  BS(A,n);

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

void BS(int A[], int n){
  int pass,i;

  for(pass = 1; pass <= n-1; pass++){
    for(i = 0; i < n - pass - 1; i++){
      if(A[i] > A[i+1])
        swap(&A[i], &A[i+1]);
    }
  }

}
