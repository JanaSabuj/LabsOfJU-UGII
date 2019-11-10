#include <iostream>
#include <string>
using namespace std;

class Shape2D {
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};

class Circle : public Shape2D {
	float radius;
public:
	Circle() {};
	Circle(float radius) {
		this-> radius = radius;
	}
	float getRadius() {
		return radius;
	}
	float perimeter() {
		return 2 * 3.14 * radius;
	}
	float area() {
		return 3.14 * radius * radius;
	}
};

class Rectangle : public Shape2D {
	float len;
	float b;
public:
	Rectangle() {};
	Rectangle(float len, float b) {
		this->len = len;
		this->b = b;
	}
	float getL() {return len;}
	float getB() {return b;}
	float perimeter() {
		return 2 * ( len + b);
	}
	float area() {
		return len * b;
	}
};

int main() {

	Shape2D* ptr[5];
	ptr[0] = new Circle(5);
	ptr[1] = new Circle(6);
	ptr[2] = new Circle(10);
	ptr[3] = new Rectangle(5,6);
	ptr[4] = new Rectangle(2,10);

	for (int i = 0; i < 5; i++) {
		cout << "Area is: " << ptr[i]->area() << endl;
		cout << "Perimeter is: " << ptr[i]->perimeter() << endl;
	}

	return 0;
}
