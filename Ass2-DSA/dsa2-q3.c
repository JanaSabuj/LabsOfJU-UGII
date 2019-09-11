#include <stdio.h>
#include <stdlib.h>
#define MX 10

struct el{
  int key;
};
typedef struct el element;

struct nd{
  element list[MX];
  int front,rear;
};
typedef struct nd queue;

void enqueue(queue* q);
void dequeue(queue* q);
void count_queue(queue* q);
void isUnderflow(queue* q);
void isOverflow(queue* q);
void disp(queue* q);

int main() {
  queue Q;
  Q.front = 0;
  Q.rear = 0;

  int choice;
  while(1){
    disp(&Q);
    printf("\n1- Enqueue \n2-Dequeue \n3-No of nodes \n4-Overflow?? \n5-Underflow ?? \n6-Exit \n7-Enter the choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1: enqueue(&Q);break;
      case 2: dequeue(&Q);break;
      case 3: count_queue(&Q); break;
      case 4: isUnderflow(&Q); break;
      case 5: isOverflow(&Q); break;
      case 6: exit(0);
    }
  }

  
  return 0;
}

void enqueue(queue* q){
  element e;
  printf("Enter the element to insert: ");
  scanf("%d", &e.key);

  if(q->rear == MX-1){
    printf("Queue Overflow !!!");
  }
else {
  q->rear = q->rear + 1;
  q->list[q->rear] = e;

}

}

void dequeue(queue* q){
  element val;
  val.key = (q->list[(q->front+1)%MX]).key;

  if(q->front == q->rear || q->front> q->rear){
    printf("Queue Underflow!!!");
  }else {

  printf("The value popped is %d", val.key);
    q->front = (q->front + 1);
  }

}

void count_queue(queue* q){
  
  int val = q->rear - q->front;

  printf("The no of nodes in queue is %d", val);
}

void isOverflow(queue* q){
  if(q->rear == MX - 1)
    printf("The queue IS Overflowing");
  else
    printf("The queue is NOT Overflowing");
}

void isUnderflow(queue* q){
  if(q->front == q->rear || q->front > q->rear)
    printf("The queue IS Underflowing");
  else
    printf("The queue is NOT Underflowing");
}

void disp(queue* q){
   int i;
   element val;
   printf("\nThe queue is: ");
   for(i = q->front + 1; i<= q->rear; i++){
        val.key = (q->list[i]).key;
        printf("%d ", val.key);
   }
}






