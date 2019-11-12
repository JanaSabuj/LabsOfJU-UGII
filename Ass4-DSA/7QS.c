#include <stdio.h>
#include <stdlib.h>

void QS(int A[], int start, int end);
int rand_part(int A[], int start, int end);
void swap(int* x, int* y);
int part(int A[], int start, int end);

int main() {
  
  int A[] = {7,8,9,11,5,5,4,2,1,3,6};
  int n = sizeof(A) / sizeof(A[0]);
  QS(A, 0, n-1);

  int i;
  for(i = 0; i < n; i++)
    printf("%d ", A[i]);

  return 0;
}


void swap(int* x, int* y){
  int temp;
  temp =  *x;
  *x = *y;
  *y = temp;
}

int part(int A[], int start, int end){
  int pivot = A[end];
  int pi = start;

  for(int j = start; j < end; j++){
    if(A[j] <= pivot){
      swap(&A[j], &A[pi]);
      pi++;
    }
  }

  swap(&A[pi], &A[end]);
  return pi;
}

int rand_part(int A[], int start, int end){
  int pi = start + (rand() % (end - start + 1));
  swap(&A[pi], &A[end]);
  return part(A, start, end);
}

void QS(int A[], int start, int end){
   
  if(start >= end)
    return;
  int pi = rand_part(A, start, end);
  QS(A, start, pi - 1);
  QS(A, pi + 1, end);
}
