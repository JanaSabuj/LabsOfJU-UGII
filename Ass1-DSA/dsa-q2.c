#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct student {
  int roll;
  char name[20];
  float per;
};

typedef struct student stud;
stud arr[100];
int cnt; 

void add();
void disp();
void search();
void modify();

int main() {
  int choice;
  cnt=0;
  

  while(1){
    printf("1- Add new record 2-Display 3- Search for a condition 4 - Modify 5 -exit\n");
    scanf("%d", &choice);

    switch(choice){
      case 1: add();break;
      case 2: disp(); break;
      case 3: search(); break;
      case 4: modify(); break;
      case 5: exit(0);
    }
  }
  
  return 0;
}

void add(){ 
  printf("Enter name: ");
  scanf("%s", arr[cnt].name);
  printf("Enter roll: ");
  scanf("%d", &arr[cnt].roll);
  printf("Enter percentage: ");
  scanf("%f", &arr[cnt].per);

  cnt++;
}

void disp(){

  int i;
  for(i=0; i<cnt; i++){
    printf("Roll no: %d", arr[i].roll);
    printf(" Name is %s", arr[i].name);
    printf(" Per is %f \n", arr[i].per);
    
  }  

}

void search(){
 int roll, i;
 bool found = false;
 printf("Enter the roll to search");
 scanf("%d", &roll);

 for(i = 0; i<cnt; i++){
    if(arr[i].roll == roll){
      found = true;
      printf(" Found!!\n");
      printf(" Roll no: %d", arr[i].roll);
      printf(" Name is %s", arr[i].name);
      printf(" Per is %f \n", arr[i].per);
      break;
    }
 }

  if(!found)
    printf(" Roll not found !!!");

}

void modify(){
  int roll, i;
  float perNew;
  bool found = false;
  printf("Enter the roll to modify ");
  scanf("%d", &roll);
  printf("Enter the new percentage :");
  scanf("%f", &perNew);

  for(i =0; i<cnt; i++){
     if(arr[i].roll == roll){
       arr[i].per = perNew;
        found = true;
        printf(" After modification!!\n");
      printf(" Roll no: %d", arr[i].roll);
      printf(" Name is %s", arr[i].name);
      printf(" Per is %f \n", arr[i].per);
      break;
     }
  }

  if(!found)
  printf(" Not found !!");
}
