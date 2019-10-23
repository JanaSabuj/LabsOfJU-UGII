#include <stdio.h>
#include <stdlib.h>

struct nd{
  int data;
  struct nd* next;
};

typedef struct nd node;

node* create_list(node* head, int data);
void disp(node* head);

int main(void) {
  printf("Hello World\n");

  node* head = NULL;
  int i;
  for(i = 0; i < 8 ; i++)
    head = create_list(head, i + 1);
    printf("The given LL is: ");
  disp(head);

  node* head1 = NULL, *head2 = NULL;
  node* curr = head;
  while(curr!=NULL){
    if((curr->data)&1){
      head2 = create_list(head2, curr->data);
    }else
      head1 = create_list(head1, curr->data);
    
    curr = curr->next;
  }

  printf("\nThe even LL is: ");
  disp(head1);
  printf("\nThe odd LL is: ");
  disp(head2);

 
  return 0;
}

void disp(node* head){
  node* curr;
  curr = head;
  while(curr != NULL){
    printf("%d ", curr->data);
    curr = curr->next;
  }
}

node* create_list(node* head,int data){
    node* temp = (node*)(malloc(sizeof(node)));
    temp -> next = NULL;
    temp -> data = data;

    if(!head) head = temp;
    else{
        node* p = head;
        while(p -> next != NULL) p = p -> next;
        p -> next = temp;
    }
    return head;
}
