#include <stdio.h>
#include <stdlib.h>
struct nd{
  int data;
  struct nd* next;
};
typedef struct nd node;

node* create_list();
void disp(node* head);
node* merge(node* p, node* q); 

int main(void) {
  node* head1;
  head1 = create_list(); 
  disp(head1);

  node* head2;
  head2 = create_list();
  disp(head2);

  node* head3;
  head3 = merge(head1, head2);
  disp(head3);


  return 0;
}

node* create_list(){
  node* head, *p;
  int val;
  int n, k=0;
  printf("\nHow many nodes? ");
  scanf("%d", &n);
  for(k=0; k<n; k++){
    printf("\nEnter data(in sorted order): ");
    scanf("%d", &val);
    if(k==0){
      head = (node*) malloc(sizeof(node));
      p = head;
    }else{
      p->next = (node*) malloc(sizeof(node));
      p = p->next;
    }
    p->data = val;
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

node* merge(node* p, node* q){
  node* head;
  node* s;

  if(p == NULL) return q;
  if(q == NULL) return p;

  if(p && q){
    if(p->data <= q->data){
      s = p;
      p = s->next;
    }else{
      s = q;
      q = s->next;
    }
  }
  head = s;

  while(p && q){
    if(p->data <= q->data){
      s->next = p;
      s = p;
      p = s->next;
    }else{
      s->next = q;
      s = q;
      q = s->next;
    }
  }

  if(p == NULL){
    s->next = q;
  }else
  s->next = p;
  printf("\nSorted Version: ");
  return head;  

}
