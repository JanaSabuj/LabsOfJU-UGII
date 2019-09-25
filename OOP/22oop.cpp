#include <iostream>
using namespace std;

class IntArray{
	int arr[5];
	int len;
public:
	IntArray(int temp[], int n);
	IntArray(IntArray& ia);
	void disp();
	void reverse();
};

IntArray::IntArray(int temp[], int n){
	for (int i = 0; i < n; ++i)
	{
		arr[i] = temp[i];
	}
	len = n;
}

IntArray::IntArray(IntArray& ia){
	
	for (int i = 0; i < ia.len; ++i)
	{
		 arr[i] = ia.arr[i];
	}
	len = ia.len;
}

void IntArray::disp(){
	cout << "The array is: ";
	for (int i = 0; i < len; ++i)
	{
		cout << arr[i] <<" ";
	}
	cout <<endl;
}

void IntArray::reverse(){

	int start = 0, end = len-1;
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}


int main() {
	int temp[] = {1,2,3};
	IntArray ia(temp,3);
	ia.disp();

	IntArray ib(ia);
	ib.disp();

	ib.reverse();

	ia.disp();
	ib.disp();

	return 0;
}