#include <iostream>
#include <cmath>
using namespace std;

class Integer{
	int x;
public:
	Integer(){};
	Integer(int);
	Integer(const Integer&);
	Integer operator++(int);//post
	Integer operator+(const Integer&);
	operator int(){
		return x;
	}
	friend ostream& operator<<(ostream&, const Integer&);
};

Integer::Integer(int a){
	x = a;
}

Integer::Integer(const Integer& a){
	//const is imp here
	x = a.x;
}

Integer Integer::operator++(int){
	Integer temp;
	temp.x = x++;
	return temp;
}

Integer Integer::operator+(const Integer& a){
	Integer temp;
	temp.x = x + a.x;
	return temp;
}

ostream& operator<<(ostream& output, const Integer& a){
	output << a.x ;
	return output;
}



int main() {
	Integer a = 4, b = a, c;
	c = a + b++;
	int i = a;
	cout << a << b  << c;
	return 0;
}
