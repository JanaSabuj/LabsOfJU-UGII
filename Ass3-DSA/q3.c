#include <stdio.h>
#include <stdlib.h>
#define MX 100

struct lifo{
  char st[MX];
  int top;
};

typedef struct lifo stack;

void create(stack* s);
void push(stack* s, char c);
void pop(stack* s);
char topVal(stack* s);
int isEmpty(stack* s);
int isBal(char arr[]);

int main(void) {
  printf("Hello Woorld\n");
  char arr[20];

  printf("Enter the parentheses expression: ");
  scanf("%s", arr);

  if (isBal(arr))
    printf("Good! String is BALANCED!!!");
  else
    printf("Bad! String is NOT balanced!!");


  return 0;
}

void create(stack* s){
  s->top = -1;
}

void push(stack* s, char c){

if(s->top == MX-1){
  printf("Stack Overflow\n");
  return;
}

s->top++;
s->st[s->top] = c;  

}

void pop(stack* s){

  if(s->top == -1){
    printf("Stack Underflow!!\n");
    return;
  }

  s->top--;

}

char topVal(stack* s){
  char c = s->st[s->top];
  return c;
}

int isEmpty(stack* s){
  if(s->top == -1)
    return 1;
  
  return 0;
}

int isBal(char arr[]){
  
  stack S;
  create(&S);
  int i,n;

  for(i=0; arr[i] !='\0';i++);
  n = i;

  for(i = 0; i < n; i++){
    char brac = arr[i];
    
    if(brac == '('){
      push(&S,brac);
      continue;
    }

    if(isEmpty(&S))
      return 0;

    if(brac == ')'){
      char tmp = topVal(&S);
      pop(&S);

      if(tmp!= '(')
        return 0;
    } 


  }


  return isEmpty(&S);
}


