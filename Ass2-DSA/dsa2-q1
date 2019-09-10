#include <stdio.h>
#include <stdlib.h>
#define MX 100

struct lifo{
  int st[MX];
  int top;
};

typedef struct lifo stack;

void create(stack* s);
void push(stack* s);
void pop(stack* s);
void isEmpty(stack* s);
void isFull(stack* s);

int main(){
  int choice;
  stack A;
  create(&A);

  while(1){
    printf("The top index is currently %d :\n", A.top);
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

void create(stack* s){
  s->top = -1;
}

void push(stack* s){
  int val;
  printf("Enter the value to push: ");
  scanf("%d", &val);

  if(s->top == MX-1){
    printf("Stack Overflow !\n");
  }else{
    s->top++;
    s->st[s->top] = val;
  }
}

void pop(stack* s){
  int val;
  if(s->top == -1){
    printf("Stack Underflow !\n");
  }else{
    val = s->st[s->top];
    s->top--;
    printf("%d has been popped \n", val);
  }
}

void isEmpty(stack* s){
  if(s->top ==-1){
    printf("The stack IS empty !\n");
  }else{
    printf("The stack is NOT empty \n");
  }
}

void isFull(stack* s){
  if(s->top == MX-1){
    printf("The stack IS full !\n");
  }else{
    printf("The stack is NOT full \n");
  }
}






