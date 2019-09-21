#include <iostream>
using namespace std;

class Complex{
	float real,img;
public:
	void setReal(float x);
	void setImg(float y);
	float getReal();
	float getImg();
	void disp();
	Complex sum(Complex a, Complex b);
};

void Complex::setReal(float x){
	real = x;
} 

void Complex::setImg(float y){
	img = y;
}

float Complex::getReal(){
	return real;
}

float Complex::getImg(){
	return img;
}

Complex Complex::sum(Complex a, Complex b){
	Complex temp;
	temp.real = a.real + b.real;
	temp.img = b.img + b.img;

	return temp;
}

void Complex::disp(){
	cout << real <<" + "<<img<<"i" <<endl;
}


int main() {

	Complex a,b,c;
	a.setReal(5);
	a.setImg(5);

	b.setReal(6);
	b.setImg(5);

	c = c.sum(a,b);

	a.disp();
	b.disp();
	c.disp();


	return 0;
}