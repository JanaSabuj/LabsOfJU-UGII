#include<stdio.h> 
#include<stdlib.h>

int main() 
{
    float SM[7][7] = {
        {1.1,0,0,0,0,0,0.5},
        {0,1.9,0,0,0,0,0.5},
        {0,0,2.6,0,0,0,0.5},
        {0,0,7.8,0.6,0,0,0},
        {0,0,0,1.5,2.7,0,0},
        {1.6,0,0,0,0.4,0,0},
        {0,0,0,0,0,0.9,1.7}
    }; 
  
    int size = 0;
    int i,j; 
    for (i = 0; i < 7; i++) 
        for (j = 0; j < 7; j++) 
            if (SM[i][j] != 0) 
                size++; 

    float CM[3][size]; 
 
    int k = 0; 
    for (int i = 0; i < 7; i++) 
        for (int j = 0; j < 7; j++) 
            if (SM[i][j] != 0) 
            { 
                CM[0][k] = i; 
                CM[1][k] = j; 
                CM[2][k] = SM[i][j]; 
                k++; 
            } 
    printf("Array representation of Sparse Matrix is is: \n");
    for (i=0; i<3; i++) 
    {   
       if(i == 2){
         for (j=0; j<size; j++) 
            printf("%0.1f ", CM[i][j]); 
       }else{
          for (j=0; j<size; j++) 
            printf("%d   ", (int)CM[i][j]); 
       } 
        printf("\n"); 
    } 
    return 0; 
} 
