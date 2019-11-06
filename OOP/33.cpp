#include <iostream>
#include <cmath>
using namespace std;

class INT {
	int i;
public:
	INT() {};
	INT(int);
	~INT() {};
	INT operator++();//pre
	INT operator++(int);//post
	operator int(){
		return i;
	}
};

INT::INT(int x) {
	i = x;
}

INT INT::operator++() {
	//pre
	INT temp;
	temp.i = ++i;
	return temp;
}

INT INT::operator++(int) {
	//pre
	INT temp;
	temp.i = i++;
	return temp;
}

int main() {

	int x = 3;
	INT y = x;
	y++ = ++y;
	x = y;


	return 0;
}
