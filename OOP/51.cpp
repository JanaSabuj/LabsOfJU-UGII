#include <iostream>
#include <cmath>
using namespace std;

template<class T>
class Stack {
	T* arr;
	int top;
	int MAX;
public:
	Stack() {};
	Stack(int);
	void push(T);
	T pop();
	T peek();
	int size();
	bool isEmpty();
	bool isFull();
	void disp();
	~Stack() {
		delete[] arr;
	}
};

template<class T>
Stack<T>::Stack(int x) {
	arr = new T[x];
	MAX = x;
	top = -1;
}

template <class T>
bool Stack<T>::isFull() {
	return top == (MAX - 1);
}

template <class T>
int Stack<T>::size() {
	return top + 1;
}

template <class T>
bool Stack<T>::isEmpty() {
	return top == -1;
}

template <class T>
void Stack<T>::push(T x) {
	if (isFull()) {
		cout << "Stack Overflow !!!!";
		exit(0);
	}
	else
	{
		top++;
		arr[top] = x;
	}
}

template <class T>
T Stack<T>::pop() {
	if (isEmpty()) {
		cout << "Stack Underflow !!!!";
		exit(0);
	}
	else
	{
		T val = arr[top];
		top--;
		return val;
	}
}

template <class T>
T Stack<T>::peek() {
	if (isEmpty()) {
		cout << "Stack Underflow !!!!";
		exit(0);
	}
	else
	{
		T val = arr[top];
		return val;
	}
}

template<class T>
void Stack<T>::disp() {
	if (isEmpty())
		cout << "Stack is Empty" << endl;
	else {
		for (int i = top; i >= 0; i--) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

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
};

ostream& operator<<(ostream& output, const Complex& c1) {
	cout << c1.real << "+i" << c1.img ;
}

int main() {

	Stack<int> s(5);
	s.push(1);
	s.push(2);
	s.push(5);
	s.push(3);
	s.pop();
	cout << s.peek() << endl;
	s.disp();

	Stack<Complex> q(3);
	q.push(Complex(2,3));
	q.push(Complex(4,5));
	q.push(Complex(6,7));
	q.pop();
	q.pop();	
	cout << q.peek() <<endl;
	q.disp();
	q.pop();
	q.pop();

	return 0;
}
