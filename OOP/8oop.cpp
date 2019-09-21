#include <iostream>
using namespace std;

void swap_ref(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 5, b = 10;
	cout << "a = " << a << ", b = " << b << endl;

	swap_ref(a, b);
	cout << "a = " << a << ", b = " << b << endl;


	return 0;
}