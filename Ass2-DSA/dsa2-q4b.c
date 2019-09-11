#include <stdio.h>
#include <stdlib.h>

struct nd{
  int data;
  struct nd* next;
};
typedef struct nd node;

struct qq{
  node* front, *rear;
};
typedef struct qq queue;

void init_queue(queue* q);
void enqueue(queue* q);
void dequeue(queue* q);

int main() {
  int choice;
  queue q;
  init_queue(&q);

  while(1){
    printf("\n1- Enqueue \n2-Dequeue \n3-Exit\n4- Enter the choice: ");
    scanf("%d", &choice);
    switch(choice){
       case 1: enqueue(&q);break;
       case 2: dequeue(&q); break;
       case 3: exit(0);
    }
   
  }
   
  return 0;
}

void init_queue(queue* q){
  q->front = NULL;
  q->rear = NULL;
}

void enqueue(queue* q){
  int val;
  node* temp;
  temp = (node*) malloc(sizeof(node));

  if(temp == NULL){
    printf("\nQueue Overflow !!");

  }else{
  
  printf("\nEnter the data of the new node to enqueue: ");
  scanf("%d", &val);

  temp->data = val;
  temp->next = NULL;

  if(q->rear == NULL){
    q->rear = temp;
    q->front = q->rear;
  }else{
    q->rear->next = temp;
    q->rear = temp;
  }

  printf("\nSuccessfully enqueued !!!");

  }
}

void dequeue(queue* q){
  node* temp;
  int val;
  if(q->front == NULL){
    q->rear = NULL;
    printf("\n Queue is Empty !!");

  }else{
    val = q->front->data;
    temp = q->front;
    q->front = q->front->next;
    free(temp);

    printf("\nSuccessfully dequeued %d", val);

    if(q->front == NULL){
      q->rear = NULL;      
    }
  }
}
