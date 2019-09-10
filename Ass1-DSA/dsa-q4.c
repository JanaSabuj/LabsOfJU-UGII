#include <stdio.h>
#include <stdlib.h>
struct nd{
  int data;
  struct nd* next;
};
typedef struct nd node;

node* insertion_at_end();
void traversal(node* head);

int main() {

  node* head;
  head = insertion_at_end();

  printf("\n All nodes have been inserted !\n");

  traversal(head);


  return 0;
}

node* insertion_at_end(){
  printf("The LL of 10 nodes is being created \n");
  int n, k, i;
  n = 10;
  node* head, *p;

  for(k =0; k<n; k++){
     if(k == 0){
       head = (node*) malloc(sizeof(node));
       p = head;
     }else {
       p->next = (node*) malloc(sizeof(node));
       p = p->next;
     }

    printf(" Enter the data for %d th node ", k+1);
    scanf("%d", &p->data);

  }

  p->next = NULL;
  return head;
}

void traversal(node* head){
  printf("Traversal !! \n");
  node* curr = head;
  while(curr!=NULL){
    printf("%d ", curr->data);
    curr = curr->next;
  }
}




