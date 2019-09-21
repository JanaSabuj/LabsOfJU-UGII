#include <iostream>
using namespace std;

void swap_val(char a[], char b[]){
	char temp[10];
	int i=0,j=0;

	while(a[i]!='\0'){

		

	}

}

void swap_ref( char* a, const char* b){
	 
	cout << a << b <<endl;
}
int main() {
  
  char a[10] = "Sabuj";
  char b[10] = "Jana";

  swap_val(a,b);

  swap_ref(a,b);

  return 0;
}