#include <iostream>
using namespace std;

class A {};
class B {};
class C {};

class D : public A , public B {};
class E : public C , public B {};

class F : public D , public E {};


int main() {

	return 0;
}
