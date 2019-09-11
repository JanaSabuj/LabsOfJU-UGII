#include <stdio.h>
#include <stdlib.h>

struct nd{
  int data;
  struct nd* next;
};
typedef struct nd node;

node* create_list();
void disp(node* head);
void split(node* head);

int main(void) {
  
  node* head;
  head = create_list();

  disp(head);

  split(head);

  return 0;
}

node* create_list(){
  node* head, *p;
  int n =10, k=0;
  for(k=0; k<n; k++){
    if(k==0){
      head = (node*) malloc(sizeof(node));
      p = head;
    }else{
      p->next = (node*) malloc(sizeof(node));
      p = p->next;
    }
    p->data = (k+1)*10;
  }
  p->next = NULL;
  return head;
}

void disp(node* head){
  node* curr;
  curr = head;
  printf("\nThe LL is: ");
  while(curr!=NULL){
    printf("%d ", curr->data);
    curr=curr->next;
  }
}

void split(node* head){
  int cnt = 0, cnt1;
  node* head1;
  node* curr = head;
  while(curr!=NULL){
    curr = curr->next;
    cnt++;
  }

  cnt1 = cnt/2;

  if(cnt%2 != 0){
    printf("\nEqual split is NOT possible");
    exit(0);
  }else{
    
    node* p, *q;
    p=head;
    cnt=0;
    while(cnt!=cnt1){
      q = p;
      p = p->next;
      cnt++;
    }

    
    head1 = p;
    q->next = NULL;
  }

   
  disp(head);

   
  disp(head1);
  
}




