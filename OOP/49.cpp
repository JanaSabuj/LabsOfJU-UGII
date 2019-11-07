#include <iostream>
#include <cmath>
using namespace std;

class Complex{
	float real;
	float img;
public:
	Complex(){};
	Complex(float x, float y){
		real = x;
		img = y;
	}
	bool operator>(const Complex& c){
		float x1 = sqrt(real*real + img*img);
		float x2 = sqrt(c.real*c.real + c.img*c.img);
		return x1>x2;
	}
	friend ostream& operator<<(ostream&, const Complex& c1);
};

ostream& operator<<(ostream& output, const Complex& c1){
	cout << c1.real <<"+i" << c1.img ;
}

template<class T>
T maxi(T x, T y){
	return (x>y)? x : y;
}

template<> char* maxi<char*> (char* s1, char* s2){
	if(s1>s2)
		return s1;
	else
		return s2;
}


int main() {

	int a = 5, b = 8;
	cout << maxi(a,b) <<endl;

	Complex x(2,5) , y(6,5);
	cout << maxi(x,y) <<endl;

	char s1[] = "sabu";
	char s2[] = "jana";

	cout << maxi(s1, s2) <<endl;

	return 0;
}
