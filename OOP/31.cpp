#include <iostream>
#include <cmath>
using namespace std;

class Complex{
	float real;
	float img;
public:
	Complex(){};
	Complex(float x, float y);
	void disp();
	Complex operator+(Complex&);
	Complex operator-(Complex&);
	friend Complex operator* (Complex&, Complex&);
	friend Complex operator/ (Complex&, Complex&);
    void operator=(Complex&);        
};

Complex::Complex(float x, float y){
	real = x;
	img = y;
}

void Complex::disp(){
	if(img > 0)
		cout << "Point is " << real <<"+i" << img <<endl;
	else
		cout << "Point is " << real <<"-i" << -img <<endl;
}

Complex Complex::operator-(Complex & c){
	Complex temp;
	temp.real = real - c.real;
	temp.img = img - c.img;

	return temp;
}

Complex Complex::operator+(Complex & c){
	Complex temp;
	temp.real = real + c.real;
	temp.img = img + c.img;

	return temp;
}

Complex operator*(Complex& c, Complex& d){
	Complex temp;
	temp.real = c.real*d.real - c.img*d.img;
	temp.img = c.real*d.img + c.img*d.real;
	return temp;
}

Complex operator/(Complex& c, Complex& d){
	Complex temp;
	temp.real = (c.real*d.real + c.img*d.img)/(d.real*d.real + d.img*d.img);
	temp.img = (c.img*d.real - c.real*d.img)/(d.real*d.real + d.img*d.img);
	return temp;
}

void Complex::operator=(Complex& c){
	real = c.real;
	img = c.img;
}

int main() {

	Complex c(5,3), d(6,8);
	c.disp();
	d.disp();

	Complex x = c + d;
	x.disp();

	Complex y = c - d;
	y.disp();

	Complex z = c * d;
	z.disp();

	Complex r = c / d;
	r.disp();

	c = d;
	c.disp();

	return 0;
}
