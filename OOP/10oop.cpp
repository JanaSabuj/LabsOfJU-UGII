#include <iostream>
#include <ctime>
using namespace std;

void swap_ref(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_val(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << ", b = " << b << endl;

}

int main() {
	clock_t t;

	int a = 5, b = 10;
	cout << "a = " << a << ", b = " << b << endl;

	t = clock();
	swap_ref(a, b);
	cout << "a = " << a << ", b = " << b << endl;
	t = clock() - t;
	cout << "Time elapsed in swap by reference: " << ((float) t / CLOCKS_PER_SEC )* 1e6<<"ms" <<endl;

	int x = 5, y = 10;
	t = clock();
	swap_val(x,y);
	t = clock() - t;
	cout << "Time elapsed in swap by value: " << ((float) t / CLOCKS_PER_SEC)*1e6 <<"ms" <<endl;


	return 0;
}