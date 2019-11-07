#include <iostream>
#include <cmath>
using namespace std;

class Index{
	int x;
public:
	Index(){};
	Index(int);
	operator int(){
		return x;
	}
	Index operator+(const Index&);
	int getVal();
};

class Integer{
	int y;
public:
	Integer(){};
	Integer(Index&);
};


Index::Index(int a){
	x = a;
}

Index Index::operator+(const Index& i){
	Index temp;
	temp.x = x + i.x;
	return temp;
}

Integer::Integer(Index& i){
	y = i.getVal();
}

int Index::getVal(){
	return x;
}

int main(){

	Index in(4),out(10);
	int x = in;
	int y = in + out;
	in = 2;
	Integer i;
	i = in;

	return 0;
}
