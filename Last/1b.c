#include<stdio.h> 
#include<stdlib.h> 

struct Node 
{ 
    float value; 
    int row_position; 
    int column_postion; 
    struct Node *next; 
}; 

typedef struct Node node;

void create(node** start, float non_zero_element, 
                     int row_index, int column_index ); 

void PrintList(node* start); 

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
  
  int i,j;
    node* start = NULL; 
  
    for ( i = 0; i < 7; i++) 
        for (j = 0; j < 7; j++) 
            if (SM[i][j] != 0) 
                create(&start, SM[i][j], i, j); 
  
    PrintList(start); 
  
    return 0; 
}

void create(node** start, float non_zero_element, 
                     int row_index, int column_index ) 
{ 
    node *temp, *r; 
    temp = *start; 
    if (temp == NULL) 
    { 

        temp = (node *) malloc (sizeof(node)); 
        temp->value = non_zero_element; 
        temp->row_position = row_index; 
        temp->column_postion = column_index; 
        temp->next = NULL; 
        *start = temp;   
    } 
    else
    { 
        while (temp->next != NULL) 
            temp = temp->next; 

        r = (node *) malloc (sizeof(node)); 
        r->value = non_zero_element; 
        r->row_position = row_index; 
        r->column_postion = column_index; 
        r->next = NULL; 
        temp->next = r; 
  
    } 
} 

  

void PrintList(node* start) 
{ 
    node *temp, *r, *s; 
    temp = r = s = start; 
  
    printf("row_position: "); 
    while(temp != NULL) 
    { 
  
        printf("%d ", temp->row_position); 
        temp = temp->next; 
    } 
    printf("\n"); 
  
    printf("column_postion: "); 
    while(r != NULL) 
    { 
        printf("%d ", r->column_postion); 
        r = r->next; 
    } 
    printf("\n"); 
    printf("Value: "); 
    while(s != NULL) 
    { 
        printf("%0.1f ", s->value); 
        s = s->next; 
    } 
    printf("\n"); 
} 
