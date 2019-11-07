#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

class Error{
	int code;
	char * desc;
public:
	Error(){};
	Error(int x, char* s){
		code = x;
		// desc = x;
		desc = new char[strlen(s)];
		strcpy(desc,s);
	}
	void disp(){
		cout << desc <<endl;
	}
};

class Stack{
	int* arr;
	int top;
	int MAX;
public:
	Stack(){};
	Stack(int x);
	void push(int);
	int pop();
	void display();
};

Stack::Stack(int sz){
	arr = new int[sz];
	top = -1;
	MAX = sz;
}

void Stack::push(int val){
	if(top == MAX-1)
		throw Error(1, (char*)"Stack Overflow!! Cannot PUSH");
	top++;
	arr[top] = val;
}

int Stack::pop(){
	if(top == -1)
		throw Error(-1, (char*)"Stack Underflow!!! Cannot POP");
	int val = arr[top];
	top--;
	return val;
}

void Stack::display(){
	if(top == -1)
		throw Error(0, (char*)"Stack is empty and cannot be displayed!!!");// type cast 
	for(int i = top; i >=0; i--)
		cout << arr[i] <<" ";
}

int main() {

	int size = 5;
	Stack s(size);
 	
 	try{
 		s.push(20);
 		s.push(30);
 		s.push(40);
 		s.push(50);
 		s.push(60);
 		s.push(60);
 		
 		s.pop();
 		s.display();
 	
 	}
 		catch(Error e){
 		e.disp();
 		
 	}
 	

	return 0;
}
