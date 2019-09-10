#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MX 100

struct lifo{
  char st[MX];
  int top;
};

typedef struct lifo stack;

void create(stack* s);
void push(stack* s, char val);
char pop(stack* s);

int main(){
  int i;
  stack A;
  create(&A);

  char str[100];
  printf("Enter the string you want to reverse: \n");
  scanf("%s", &str);

  for(i = 0; i<strlen(str); i++){
  	 push(&A, str[i]);	
  }

  for (i = 0; i < strlen(str); ++i)
  {
  	 str[i] = pop(&A);
  }

  printf("The reversed string is %s\n", str);

  return 0;
}

void create(stack* s){
  s->top = -1;
}

void push(stack* s, char val){ 

  if(s->top == MX-1){
    exit(-1);
  }else{
    s->top++;
    s->st[s->top] = val;
  }
}

char pop(stack* s){
  int val;
  if(s->top == -1){
     exit(-1);
  }else{
    val = s->st[s->top];
    s->top--;
    return val;
  }
}








