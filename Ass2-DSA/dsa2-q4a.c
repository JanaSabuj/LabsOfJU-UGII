#include <stdio.h>
#include <stdlib.h>

struct lifo{
  int data;
  struct lifo* next;
};
typedef struct lifo node;

void create(node** top);
void push(node** top);
void pop(node** top);
void isEmpty(node** top);
void isFull(node** top);

int main() {
  int choice;
  node* A;
  create(&A);

  while(1){
    printf("1-Push \n2-Pop \n3-Is Full \n4-Is Empty \n5-Exit \nEnter the choice: ");
    scanf("%d", &choice);

     switch(choice){
      case 1: push(&A); break;
      case 2: pop(&A); break;
      case 3: isFull(&A); break;
      case 4: isEmpty(&A); break;
      case 5: exit(0);
    }

  }
  

  return 0;
}

void create(node ** top){
  *top = NULL;
}

void push(node** top){
  int val;
  printf("Enter the value to push: ");
  scanf("%d", &val);

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

void pop(node** top){
  int val;
  node* p;
  if(*top == NULL){
    printf("Stack Underflow ! \n");

  }else{
    val = (*top)->data;
    p = *top;
    (*top) = (*top)->next;
    free(p);

    printf("The value popped is %d \n", val);
  } 
}

void isEmpty(node** top){
  if(*top == NULL)
    printf("Yes it is empty! ");
    else
    printf("It is not empty!!");
}

void isFull(node** top){
  node* temp;
  temp = (node*) malloc(sizeof(node));

  if(temp==NULL){
    printf("Stack IS Full !! \n");
  }else{
    printf("Stack is NOT full");
  }
}

