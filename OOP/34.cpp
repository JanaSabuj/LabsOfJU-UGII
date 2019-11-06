#include <iostream>
#include <cmath>
using namespace std;

class IntArray{
	int* arr;
	int len;
public:
	IntArray(){};
	IntArray(int);
	~IntArray();
	int& operator[](int i);
	friend ostream& operator<<(ostream& ouput, IntArray&);
};

IntArray::IntArray(int n){
	arr = new int[n];
	len = n;
}

IntArray::~IntArray(){
	delete arr;
}

int& IntArray::operator[](int i){
	return arr[i];
}

ostream& operator<<(ostream& output, IntArray& I){
	for(int i = 0; i < I.len; i++)
		cout << I.arr[i] <<" ";
}




int main() {

	IntArray i(10);
	for(int k = 0; k < 10; k++)
		i[k] = k;
	cout << i;

	return 0;
}
