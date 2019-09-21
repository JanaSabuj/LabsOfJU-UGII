#include <iostream>
using namespace std;

class Rectangle{
	int l,b;
public:
	Rectangle(int x,int y);
	float area();
};

Rectangle :: Rectangle(int x, int y){
	l = x;
	b = y;
	cout << "Rectangle created with l = " << l <<" and b = " << b <<endl;
}

float Rectangle:: area(){

	return l*b;
}

int main() {

	Rectangle a(5,5);
	cout << "Area is " << a.area() <<endl;
	Rectangle b(50,50);
	cout << "Area is " << b.area() <<endl;
	Rectangle c(10,5);
	cout << "Area is " << c.area() <<endl;
	Rectangle d(10,10);
	cout << "Area is " << d.area() <<endl;

	return 0;
}