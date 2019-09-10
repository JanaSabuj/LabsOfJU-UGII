#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct lifo{
  char data;
  struct lifo* next;
};
typedef struct lifo node;

void create(node** top);
void push(node** top, char val);
char pop(node** top);
 

int main() {
  
  node* A;int i;
  create(&A);
  char str[100];

  printf("Enter the string to reverse: ");
  scanf("%s", str);
  for(i =0; i< strlen(str); i++){
     push(&A, str[i]);
  }

  for(i =0; i<strlen(str); i++){
     str[i] = pop(&A);
  }
  
  printf("The reverse string is %s \n", str);

  return 0;
}

void create(node ** top){
  *top = NULL;
}

void push(node** top, char val){
 
  node* temp;
  temp = (node*) malloc(sizeof(node));

  if(temp == NULL){
    printf("Stack Overflow!! \n");

  }else{
    temp->data = val;
    temp->next = *top;
    *top = temp; 
  }

}

char pop(node** top){
  int val;
  node* p;
  if(*top == NULL){
    printf("Stack Underflow ! \n");
    exit(-1);
  }else{
    val = (*top)->data;
    p = *top;
    (*top) = (*top)->next;
    free(p);

    return val;
  } 
}

