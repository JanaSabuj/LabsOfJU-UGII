#include <stdio.h>
#include <stdlib.h>

struct tree{
  int data;
  struct tree* left;
  struct tree* right;
};

typedef struct tree node;
int cnt;

node* create(int x);
void countLeaf(node* root);
void dfs(node* root);

int main(void) {
  
  node* root = create(5); 
  root->left = create(7);
  root->right = create(10);
  countLeaf(root);

  return 0;
}

node* create(int x){
  node* t = (node*) malloc(sizeof(node));
  t->data = x;
  t->left = NULL;
  t->right = NULL;

  return t;
}

void dfs(node* root){
  if(root == NULL)
    return;
    
    if(root->left == NULL && root->right == NULL)
      cnt++;

    dfs(root->left);
    dfs(root->right);
}

void countLeaf(node* root){
  cnt=0;
  dfs(root);

  printf("No of leaf is: %d", cnt);
}


