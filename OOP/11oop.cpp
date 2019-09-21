#include <iostream>
using namespace std;

int fac(const int& n) {
	if (n == 0 || n == 1)
		return n;
	return n * fac(n - 1);
}

int main() {

	int x = 5;
	int ans = fac(x);
	cout << ans << endl;

	return 0;
}