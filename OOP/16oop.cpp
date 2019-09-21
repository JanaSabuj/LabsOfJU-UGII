#include <iostream>
#include <cstdlib>
using namespace std;

void print(int arr[10]){
	cout <<"The array is: " <<endl;
	for(int j=0; j<10; j++){
		cout << arr[j] <<" ";
	}
	cout <<endl;
}

void print(int mat[10][10]){
	cout << "The matrix is : " <<endl;
	for (int i = 0; i < 10; ++i)
	{
		 
		for(int j=0; j<10; j++){
			cout << mat[i][j] <<" ";
		}
		cout <<endl;
	}
}

int main() {
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; ++i)
	{
		arr[i] = rand() % 10;

	}
	print(arr);

	int mat[10][10];
	for (int i = 0; i < 10; ++i)
	{
		 
		for(int j=0; j<10; j++){
			mat[i][j] = rand()%10;
		}
	}

	print(mat);


	return 0;
}