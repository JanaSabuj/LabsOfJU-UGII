#include <stdio.h>
#include <stdlib.h>

void MS(int A[], int l, int r);
void Merge(int A[], int l, int mid, int r);

int main() {
  int A[] = {9,2,5,1,7,6,3,8,9, 0};
  int n = sizeof(A) / sizeof(A[0]);
  MS(A, 0, n - 1);

  int i;
  for(i = 0; i < n; i++)
    printf("%d ", A[i]);

  return 0;
}

void Merge(int A[], int l, int mid, int r){

  int i,j,k;
  int n1 = (mid - l + 1);
  int n2 = (r - (mid+1) + 1);

  int L[n1], R[n2];
  for(i = 0; i < n1; i++)
    L[i] = A[l + i];
  for(j = 0; j < n2; j++)
    R[j] = A[mid + 1 + j];

    i = 0;  
    j = 0;  
    k = l;

    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            A[k++] = L[i++]; 
        } 
        else
        { 
            A[k++] = R[j++]; 
        } 
    } 

    while (i < n1) 
    { 
        A[k++] = L[i++]; 
    }

    while (j < n2) 
    { 
        A[k++] = R[j++];  
    }

}

void MS(int A[], int l, int r){
  if(l >= r)
    return;

  int mid = l + (r - l) / 2;
  MS(A, l, mid);
  MS(A, mid + 1, r);
  Merge(A, l, mid, r);
}
