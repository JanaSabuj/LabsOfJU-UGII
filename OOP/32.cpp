#include<iostream>
#include<cmath>
using namespace std;

class Complex {
	float real;
	float img;

public:
	Complex(){};
	Complex(float x, float y){
		real = x;
		img = y;
	}
	void disp(){
		cout << real <<" +i" << img <<endl;
	}
};

class Quadratic {
	float a;
	float b;
	float c;
public:
	Quadratic() {};
	Quadratic(float, float, float);
	friend ostream& operator<<(ostream&, const Quadratic&);
	friend istream& operator>>(istream&, Quadratic&);// cannot use const Quadratic here
	// Quadratic operator+(Quadratic& , Quadratic& );// error - you cannot take more than 1 operator to overload +
	Quadratic operator+(Quadratic&);
	float value(float x);
	void findRoots();
};

Quadratic::Quadratic(float x, float y, float z) {
	a = x;
	b = y;
	c = z;
}

ostream& operator<<(ostream& output, const Quadratic& q) {

	output << q.a << "x^2 + " << q.b << "x + " << q.c ;
	return output;
}

istream& operator>>(istream& input, Quadratic& q){
	cout << "Enter the a,b,c separated by spaces: ";
	input >> q.a >> q.b >> q.c ;
	return input;
}

Quadratic Quadratic::operator+(Quadratic& q) {
	Quadratic temp;
	temp.a = a + q.a;
	temp.b = b + q.b;
	temp.c = c + q.c;

	return temp;
}

float Quadratic::value(float x) {
	return a * (x * x) + b * (x) + c;
}

void Quadratic::findRoots(){
	if(a == 0){
		cout <<"Root is" << -c/b <<endl;
		return;
	}

	float D = b*b - 4*a*c;
	if(D == 0){
		cout <<"Root 1 = Root 2 = " << -b / (2 * a) <<endl;
	}else if(D > 0){
		float x1 = (-b + sqrt(D)) / (2 * a) ;
		float x2 = (-b - sqrt(D)) / (2 * a) ;
		cout << "Roots are real and unique : " <<endl;
		cout << "Root 1 = " << x1 <<endl;
		cout << "Root 2 = " << x2 <<endl;
	}else if( D < 0 ){
		cout << "Roots are imaginary " <<endl;
		float r = -b / (2 * a);
		float i = sqrt(-D)/(2*a);// sqrt(-D)
		Complex temp(r,i);
		temp.disp();
	}
}


int main() {
	freopen("input.txt", "r" , stdin);
	Quadratic q1(3, 2, 5);
	cout << q1 <<endl;
	
	Quadratic q2;
	cin >> q2;
	cout << q2 << endl;

	Quadratic x = q1 + q2;
	cout << x << endl;

	cout << x.value(1) << endl;

	x.findRoots();

	return 0;
}
