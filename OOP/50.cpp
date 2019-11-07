#include <iostream>
#include <cmath>
using namespace std;

class Stack{
	int* arr;
	int top;
	int MAX;
public:
	Stack(){};
	Stack(int x);
	void push(int);
	int pop();
	friend ostream& operator<<(ostream&, const Stack&);
	void operator=(const Stack&);

};

ostream& operator<<(ostream& output, const Stack& s) {

	if(s.top == -1)
		output << "Stack is empty and cannot be displayed!!!" <<endl;
	for(int i = s.top; i >=0; i--)
		output << s.arr[i] <<" ";
	
	return output;
}

void Stack::operator=(const Stack& s){
	top = s.top;
	MAX = s.MAX;
	arr = s.arr;
}


Stack::Stack(int sz){
	arr = new int[sz];
	top = -1;
	MAX = sz;
}

void Stack::push(int val){
	if(top == MAX-1)
		cout << "Stack Overflow!! Cannot PUSH" <<endl;
	top++;
	arr[top] = val;
}

int Stack::pop(){
	if(top == -1)
		cout << "Stack Underflow!!! Cannot POP" <<endl;
	int val = arr[top];
	top--;
	return val;
}


class Complex {
	float real;
	float img;
public:
	Complex() {};
	Complex(float x, float y) {
		real = x;
		img = y;
	}
	friend ostream& operator<<(ostream&, const Complex& c1);
	void operator=(const Complex&);
};

ostream& operator<<(ostream& output, const Complex& c1) {
	cout << c1.real << "+i" << c1.img ;
	return output;
}

void Complex::operator=(const Complex &c){
  real = c.real ;
  img = c.img ;
}

template<class T>
void swapIt(T& x, T& y) {
	T temp = x;
	x = y;
	y = temp;
}

int main() {

	int a = 2, b = 5;
	swapIt(a, b);
	cout << a << " " << b << endl;

	Complex x(2, 5), y(5, 7);
	swapIt(x, y);
	cout << x << " " << y << endl;

	Stack s1(2), s2(3);
	s1.push(1);
	s1.push(2);

	s2.push(5);
	s2.push(6);
	s2.push(7);

	swapIt(s1,s2);
	cout << s1 <<endl;
	cout << s2 <<endl;

	return 0;
}
