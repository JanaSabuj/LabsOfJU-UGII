 
#include <stdio.h>
#include <stdlib.h>

struct tree{
  int data;
  struct tree* left;
  struct tree* right;
};
typedef struct tree node;

node* create(int x);
node* insert(node* root, int x);
void inorder(node* root);
void search(node* root, int val);
int found;

int main(void) {
  
  node* root = NULL;
  int choice;
  int val;
  int n;
  printf("How many nodes you want to insert in BST: ");
  scanf("%d", &n);

  while(n--){
    printf("Enter the node value to insert: ");
    scanf("%d", &val);
    root = insert(root, val);
    printf("\n");
  }
  printf("Inorder traversal of the BST after insertion: ");
  inorder(root);

  printf("\nEnter the value to search in BST: ");
  scanf("%d", &val);
  found = 0;
  search(root,val);
  if(found)
    printf("The Key EXISTS in the BST!!!");
  else
    printf("Sorry!!The key is not present!!");

   
  return 0;
}

void inorder(node* root){
  if(root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

node* insert(node* root, int x){
  if(root == NULL)
    return create(x);
  if(x < root->data)
    root->left = insert(root->left, x);
  else if(x > root->data)
    root->right = insert(root->right, x);
  return root;
}

node* create(int x){
  node* t = (node*) malloc(sizeof(node));
  t->data = x;
  t->left = NULL;
  t->right = NULL;
  return t;
}

void search(node* root, int val){
  if(root==NULL)
    return;
  if(root->data == val){
    found = 1;
    return;
  }else if(root->data < val){
    search(root->right, val);
  }else{
    search(root->left, val);
  }

}
 
