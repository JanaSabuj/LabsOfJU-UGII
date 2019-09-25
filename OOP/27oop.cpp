#include <iostream>
using namespace std;

class Queue {
	int *data;
	int front, rear;
public:
	Queue(int);
	void add(int);
	int remove();
	void disp();
};

Queue::Queue(int n){
	data = new int[n];
	front = rear = 0;
}

void Queue::add(int val){
	rear++;
	data[rear] = val;
}

int Queue::remove(){
	int val = data[front+1];
	front++;
}

void Queue::disp(){
	cout << "The queue is :";
	for (int i = front + 1; i<=rear; ++i)
	{
		cout << data[i] <<" ";
	}
	cout <<endl;
}

int main() {
	Queue q(10);
	q.add(2);
	q.add(3);
	q.add(4);
	q.add(5);
	 

	int v1 = q.remove();
	int v2 = q.remove();
	 

	q.disp();

	return 0;
}