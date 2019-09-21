#include <iostream>
using namespace std;

int add(int x, int y = 0, int z = 0) {
	return x + y + z;
}

int main() {

	int x = 5, y = 6, z = 9;
	cout << add(x, y, z) << endl;
	cout << add(x, y) << endl;
	cout << add(x) << endl;

	return 0;
}