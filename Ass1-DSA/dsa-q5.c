#include <stdio.h>
#include <stdlib.h>

struct nd{
  int data;
  struct nd* next;
};
typedef struct nd node;
int cnt;
node* head;

void insert_beg();
void insert_end();
void insert_at_pos();
void delete_at_pos();
void count_nodes();
void rev_LL();
void disp();
node* reverse(node* head);


int main( ) {
  int choice;
  cnt=0;

  while(1){
    printf("1- Insert node at Beginning \n2- Insert node at End \n3- Insert at specific position \n4 - Delete from specific position \n5 -Count of nodes \n6- Display reverse LL\n7- Exit \n Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1: insert_beg();disp();break;
      case 2: insert_end();disp(); break;
      case 3: insert_at_pos();disp(); break;
      case 4: delete_at_pos();disp(); break;
      case 5: count_nodes();disp(); break;
      case 6: rev_LL();disp(); break;
      case 7: exit(0);
    }

  }

  return 0;
}

void disp(){
  printf("\nLL is :");
  node* curr = head;
  while(curr!=NULL){
    printf("%d ", curr->data);
    curr = curr->next;
  }
  printf("\n");
}

void insert_beg(){
   
  node* temp, *p;
  temp = (node*) malloc(sizeof(node));

  printf("Enter the data to insert: ");
  scanf("%d", &temp->data);

  if(cnt==0){
    temp->next = NULL;
    head = temp;
  }else{
    temp->next = head;
    head = temp;
  }

  cnt++;
}

void insert_end(){

  node* temp;
  temp = (node*) malloc(sizeof(node));
  printf("Enter the data to insert: ");
  scanf("%d", &temp->data);

  node *p, *q;
  p = head;

  while(p!=NULL){
    q = p;
    p = p->next;
  }

  if(p == NULL){
    temp->next = NULL;
    q->next = temp;
    cnt++;
  }
}

void insert_at_pos(){

  int val;
  printf("Enter the data(key) before which to insert: ");
  scanf("%d", &val);

  node* temp, *p, *q;
  temp = (node*) malloc(sizeof(node));
  printf("Enter the data to insert : ");
  scanf("%d", &temp->data);

  p = head;
  while((p->data!=val)){
    q = p;
    p = p->next;
  }

  if((p->data) == val){
    temp->next = p;
    q->next = temp;
    cnt++;
  }

}

void delete_at_pos(){
  int data;
  printf("Enter the data to delete: ");
  scanf("%d", &data);

  node* p , *q;
  p = head;

  if(p->data == data){
      head = p->next;
      free(p);
      cnt--;
  }else{
    while((p!=NULL) && (p->data != data)){
      q = p;
      p = p->next;
    }

    if(p == NULL){
      printf("\n No match found to delete ");
    }else {
      q->next = p->next;
      free(p);
      cnt--;
    }

  }

}

void count_nodes(){
  int val;
  val=0;

  node* curr = head;
  while(curr!=NULL){
    curr=curr->next;
    val++;
  }

  printf("The count of nodes is is %d", val);
}

node* reverse(node* currhead){
   if(currhead == NULL || currhead->next == NULL)
    return currhead;

  node* rest = reverse(currhead->next);
  currhead->next->next = currhead;
  currhead->next = NULL;

  return rest; 
}

void rev_LL(){
   
   head = reverse(head);
}






