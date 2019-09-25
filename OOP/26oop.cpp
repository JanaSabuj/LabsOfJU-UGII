#include <iostream>
using namespace std;

class Stack {
	int *buffer;
	int top;

public:
	Stack(int);
	void push(int);
	int pop();
	void disp();
};

Stack:: Stack(int n) {
	buffer = new int[n];
	top = -1;
}

void Stack::push(int x){
	top++;
	buffer[top] = x;
}

int Stack::pop(){
	int val = buffer[top];
	top--;
	return val;
}

void Stack::disp(){
	cout <<"The stack is : ";
	for (int i = 0; i <= top; ++i)
	{			
		cout << buffer[i] <<" ";
	}
	cout <<endl;
}


int main() {

	Stack S(10);
	S.push(2);
	S.push(3);
	S.push(4);
	S.push(5);

	int val = S.pop();

	S.disp();

	return 0;
}