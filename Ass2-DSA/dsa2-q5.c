#include <stdio.h>
#include <stdlib.h>
#define MX 5

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
void find_front(queue* q);
void isEmpty(queue* q);
void isFull(queue* q);

int main() {
  queue Q;
  Q.front = 0;
  Q.rear = 0;

  int choice;
  while(1){
    printf("\n1- Enqueue \n2-Dequeue \n3-Find Front \n4-Is Full \n5-Is Empty \n6-Exit \n7-Enter the choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1: enqueue(&Q);break;
      case 2: dequeue(&Q);break;
      case 3: find_front(&Q); break;
      case 4: isEmpty(&Q); break;
      case 5: isFull(&Q); break;
      case 6: exit(0);
    }
  }

  
  return 0;
}

void enqueue(queue* q){
  element e;
  printf("Enter the element to insert: ");
  scanf("%d", &e.key);

  q->rear = ((q->rear) + 1)%MX;
  q->list[q->rear] = e;
}

void dequeue(queue* q){
  element val;
  val.key = (q->list[(q->front+1)%MX]).key;

  printf("The value popped is %d", val.key);
  q->front = (q->front + 1)%MX;
}

void find_front(queue* q){
  element val;
  val.key = (q->list[(q->front+1)%MX]).key;

  printf("The front is %d", val.key);
}

void isFull(queue* q){
  if(q->front == (q->rear + 1)%MX)
    printf("The queue IS Full");
  else
    printf("The queue is not full");
}

void isEmpty(queue* q){
  if(q->front == q->rear)
    printf("The queue IS Empty");
  else
    printf("The queue is not empty");
}






