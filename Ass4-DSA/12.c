#include<stdio.h>
#include<stdlib.h>
const int hash = 13;

struct link{
   int mod;
   int val;
   struct link* next; 
}; 

typedef struct link node;

node* arr[hash];
node* create(int, int, node*);
int search(int);

int main(){
    int i,n,k;
    for(i = 0;i < hash;i++) 
      arr[i] = NULL;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        printf("Enter the value: ");
        scanf("%d",&k);
        arr[k%hash] = create(k%hash,k,arr[k%hash]);
    }
    int num;
    printf("Enter the number to search: ");
    scanf("%d",&num);
    int get = search(num);
    if(get != -1){
        printf("Element found at location %dth link list at index %d \n",num%hash, get);
    }
    else printf("Element not present in hash table\n");
    return 0;
}

node* create(int mod, int val, node* head){
    node* temp = (node*)(malloc(sizeof(node)));
    temp -> mod = mod;
    temp -> val = val;
    temp -> next = NULL;

    if(!head) head = temp;
    else{
        node* p = head;
        while(p -> next) p = p -> next;
        p -> next = temp;
    }
    return head;
}

int search(int num){
    node* temp = arr[num%hash];
    int count = 0;
    while(temp){
        if(temp -> val == num) return count;
        else{
            temp = temp -> next;
            ++count;
        }
    }
    return -1;
}
