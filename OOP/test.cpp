/*--------------------------"SABUJ-JANA"------"JADAVPUR UNIVERSITY"--------*/
/*-------------------------------@greenindia-----------------------------------*/
/*---------------------- Magic. Do not touch.-----------------------------*/
/*------------------------------God is Great/\---------------------------------*/
#include <iostream>
using namespace std;

class A {
public:
	A(){
		cout <<"A ctor" <<endl;
	}
	~A(){
		cout <<"A dtor" <<endl;
	}
};
class B :  public A {
public:
	B(){
		cout <<"B ctor" <<endl;
	}
	~B(){
		cout <<"B dtor" <<endl;
	}
};
class C:  public A {
public:
	C(){
		cout <<"C ctor" <<endl;
	}
	~C(){
		cout <<"C dtor" <<endl;
	}
};
class D: public B, public C {
public:
	D(){
		cout <<"D ctor" <<endl;
	}
	~D(){
		cout <<"D dtor" <<endl;
	}
};


int main() {
	freopen("input.txt", "r", stdin);

	D d;


	return 0;
}


