#include <iostream>
using namespace std;

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int maximum(int x, int y, int z) {
	return max(x, max(y, z));
}

int maximum(int arr[]) {
	int ans = arr[0];

	for (int i = 1; i < 5; ++i)
	{
		ans = max(ans, arr[i]);
	}

	return ans;

}

int main() {

	int x = 10, y = 20, z = 30;
	cout << maximum(x, y, z) << endl;

	int arr[5] = { -2, -1, 0, 10, 20};
	cout << maximum(arr) << endl;


	return 0;
}